#include <stdio.h>
#include <iostream>

// using global void, we know function should run on a device 
// kernel function is given to compiler that handles device code, and feeds it to main
__global__ void kernel (void){
	
}

// to run: nvcc -o executable helloworld.cu
// this code runs entirely on the host
//	The CPU and system's memory is the host
//	the GPU and its memory is the device


// A function that executes on the device is called a kernel 
//(aka using a GPU to execute code)

int main(void){
	
	kernel<<<1,1>>>(); // <<<>>> arguments we pass to runtime system
	printf("Hello World!\n");
	return 0;
}
