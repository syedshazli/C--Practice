#include <pthread.h>
#include <iostream>
#include <array>
#include <cassert>
#include <mutex>
// cpp 11 threads is what you usually want to use
// compile:
// g++ pthreads.cpp -lpthread -o tid
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

// arguments are casted in void pointers for pthreads
void *print(void *args){

    int *ID  = static_cast<int *> (args);
    pthread_mutex_lock(&lock);
    // critical region for cout, order doesnt matter
    std::cout<<"Printing from thread "<<*ID<<'\n';
    pthread_mutex_unlock(&lock);

    // kills thread
    pthread_exit(NULL);
}

int main()
{
    std::array<int, 4> tid = {0,1,2,3};
    std::array<pthread_t, 4> myThreads;

    // looping by reference
    for (auto &id : tid){
        // spawn threads
        // four args
        /**
         * Address of thread obj
         * thread attributes
         * entrypoint (function pointer)
         * void pointer to arguments
         */
        pthread_create(&myThreads[id], NULL, print, static_cast<void *> (&id));
    }

    // basically our return, makes sure main function finishes after thread prints
    // exiting main is blocked till other threads are done
    pthread_exit(NULL);

}   