#include <iostream>
#include <random>
#include <span>
#include <vector>
#include <thread>
#include <semaphore>
// cant generate and process data at the same time

// double buffering --> form of pipelining to overlap operations
// buffer fill and drain
// generating data then processing and using data

void generateData(std::span<int> data){
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution dist(1,100);

    // generate data
    for( auto &value : data){
        value = dist(mt);
    }

}


// process data and dummy work
void processData(std::span<int> data){
    for(int i = 0; i<5; i++){
        for(auto &value : data){
            value %= value + 1;
        }
    }
}

int main(){
    
    std::vector<int> data1;
    std::vector<int> data2;
    data1.resize(1 << 20);
    data2.resize(1 << 20);

    // semaphores for coordination of work
    std::binary_semaphore signal_to_process(0);
    std::binary_semaphore signal_to_generate(1);

    // num iterations
    const int numIterations = 100;

    // work func for generating data
    auto data_generator = [&](){

        for(int i = 0; i<numIterations; i++){
            generateData(data1);
            // wait till current processing work is done
            signal_to_generate.acquire();

            // swap vectors
            data1.swap(data2);

            signal_to_process.release();


        }
    };

    auto data_processor = [&](){

        for(int i = 0; i<numIterations; i++){

            signal_to_process.acquire();
            processData(data2);
            signal_to_generate.release();

        }
    };

    std::jthread generator(data_generator);
    std::jthread processor(data_processor);

}