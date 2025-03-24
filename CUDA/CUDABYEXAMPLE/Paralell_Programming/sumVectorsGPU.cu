#include <stdio.h>

#define N 10


__global__ void add(int *dev_a, int *dev_b, int *dev_c){
	
	// no need to define blockIdx, built in that CUDA runtime defines
	// contains value for block index for whatever block is executing
	// so block 5 is executing, blockIdx.x returns 5, which is the TID
	// when initialising the block in the host, N is 0 indexed
	// so tid goes from 0 to N-1
	// as a result, each block computes 1 value in the dev_c array
	// if we have more entries in the array than threads, we specify by
	// for(int i = tid, i <tid+2, i++){if(tid<N{dev_c[tid] = ....}}
	
	int tid = blockIdx.x; // handle data @ this index
	if(tid < N){
	
		dev_c[tid] = dev_a[tid] + dev_b[tid];
	}
}


// now run the add function in paralell on the GPU
int main(void){

	
	int a[N];
        int b[N];
        int c[N];
	int *dev_a;
       	int *dev_b; 
	int *dev_c; // pointers to device code

	cudaMalloc( (void **)&dev_a, N*sizeof(int) );
	cudaMalloc( (void **)&dev_b, N*sizeof(int) );
	cudaMalloc( (void **)&dev_c, N*sizeof(int) );


	// fill arrays a and b on the CPU
	for(int i = 0; i<N; i++){
		a[i] = -i;
		b[i] = i*i;
	}


	// copy arrays a and b to the GPU using cudaMemcpy
	cudaMemcpy(dev_a, a, N*sizeof(int), cudaMemcpyHostToDevice);
	cudaMemcpy(dev_b, b, N*sizeof(int), cudaMemcpyHostToDevice);

	// note how device arrays haven't been modified till we call device function
	
	// similar to making 10 copies of the add function and executing in paralell
	// each paralell invocation is a block
	add<<<N,1>>>(dev_a, dev_b, dev_c);//<<<N,1>>>, N specifies number of paralell thread blocks
	
	// collection of paralell blocks: a grid
	// in our case, we have a 1D grid of N blocks


	// and we're using 1 block

	// copy arrat 'c' back from GPU to CPU
	cudaMemcpy(c, dev_c, N*sizeof(int), cudaMemcpyDeviceToHost);



	// display the result
	for(int i = 0; i<N; i++){
	
		printf("%d + %d = %d\n", a[i], b[i], c[i] );
	
	}// end of for loop
	
	// free allocated memory
	cudaFree(dev_a);
	cudaFree(dev_b);
	cudaFree(dev_c);
	
	return 0 ;
}

