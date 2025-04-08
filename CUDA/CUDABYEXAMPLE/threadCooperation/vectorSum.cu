#include <iostream>
#define N 20
using namespace std;

__global__ void add(int *a, int *b, int *c, int *d){

	int threadID  = threadIdx.x;
	if(threadID < N){
	
		c[threadID] = (a[threadID] + b[threadID]) * d[threadID];
	
	}

	}


int main(void){
	

	int a[N], b[N], c[N], d[N];
	int *device_a, *device_b, *device_c, *device_d;
	//allocate memory on the device
	cudaMalloc( (void**)&device_a, N*sizeof(int)  );
	cudaMalloc( (void**)&device_b, N* sizeof(int)  );
	cudaMalloc( (void**)&device_c, N*sizeof(int) );
	cudaMalloc( (void**)&device_d, N*sizeof(int) );

	for(int i = 0; i<N; i++){
	
		a[i] = i;
		b[i] = i*i;
		d[i] = (int)i/2;
	}


	// copy arrays a and b to the GPU using cudamemcpy

	cudaMemcpy(device_a, a, N*sizeof(int), cudaMemcpyHostToDevice );
	cudaMemcpy(device_b, b, N*sizeof(int), cudaMemcpyHostToDevice);
	cudaMemcpy(device_d, d, N*sizeof(int), cudaMemcpyHostToDevice );
	

	// compute the addition
	// 1 thread block, 20 threads on the block
	add<<<1,N>>>(device_a, device_b, device_c, device_d);

	// copy array c from GPU to CPu so we can view results
	cudaMemcpy(c, device_c, N*sizeof(int), cudaMemcpyDeviceToHost);

	for(int i = 0; i<N; i++){
	
		cout<<a[i]<< " + "<<b[i] <<" * "<<d[i]<<" = "<<c[i]<<endl;
	}



	cudaFree(device_a);
	cudaFree(device_b);
	cudaFree(device_d);
	cudaFree(device_c);
	
	return 0;
	}


