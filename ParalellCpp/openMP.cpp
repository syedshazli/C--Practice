#include <omp.h>
#include <iostream>

int main(){
    // everything in this block will be in paralell 
#pragma omp parallel{
    // declare critical region, no conflicts with cout
#pragma omp critical{
std::cout << "Printing from thread: "<<omp_get_thread_num() <<'\n';
}

}
    


  return 0;


}