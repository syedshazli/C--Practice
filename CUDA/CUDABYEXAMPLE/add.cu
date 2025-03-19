#include <stdio.h>
#include <iostream>

// can pass parameters to kernel
// allocate memory when doing anything with device

// device code
// run on the GPU


// ctrl + shift + v to copy paste

__global__ void add(int a, int b, int *c){
	*c = a + b; // takes memory that c is pointing to
			// stores result of a + bi

	// in the dvice: can pass host pointers around, but cant use host pointer to access memory from host code
	// and device pointers can access memory from device code

}

int main(void){

	int c;
	int *dev_c;

	//CUDA Malloc overview
	// first argument: point to a pointer you want to hold address of
	//					  newly allocated memory

	// second parameter: size of allocation needed to make
	// cannot use pointer returned by CUDA malloc to read/write from mem
	//						in the host

	/**
	  * Allowed: Passing pointers allocated w/cudaMalloc() to functions that execute on device
	  * ALlowed: use pointers allocated w/cudaMalloc to read/write memory from code that executes on device
	  * NOT ALLOWED: Use pointers allocated w.cudaMalloc to read/write memory from code that executes on host
	  * CANNOT use free() to release mempry w/cuda malloc
	  * Instead, just use cudaFree()
	  */

	cudaMalloc( (void**)&dev_c, sizeof(int));//behaves similarly to malloc()
	//tells CUDA runtime to allocated memory on the device (GPU)




	add<<<1,1>>>(2, 7, dev_c);// passing parameters using () to kernel, just have <<1,1>>

	// reminder when passing in pointer without the *, it is just a memory address
			
	
	// access memort on the device via calls to cudaMemcpy
	// like C memcpy, one more parameter to specify source and destination pointers point to device memory
	// in this example, we tell runtime the source pointer is device pointer, destination pointer is host pointer
	// can use cudaMemcpyHosttoDeivce for opposite effecct
	// tell them that both poiunters are on the device by saying cudaMemcpyDevicetoDevice
	// if both on the host, just use memcpy() from C
			cudaMemcpy(&c,
				dev_c,
				sizeof(int),
				cudaMemcpyDeviceToHost);
	printf("2 + 7 = %d\n", c);
	cudaFree(dev_c);

	int count;
	cudaGetDeviceCount(&count); // get count of cuda devices
	
	return 0;


}


