// basics of multithreading
// run lscpu in linux to find info on cores
// ./arch & lets us find out whats going on background
// use htop to find stats on the cores while running
#include <thread>
using namespace std;

void infinite_loop(){
    while(true){
        int value;
        for(int i = 0; i<10000; i++){value+=1;}
    }
}

int main(){

    
    thread t1(infinite_loop);
    thread t2(infinite_loop);
    
    t1.join();
    t2.join();

}