
#define N 20


__global__ void add(int *a, int *b, int *c){

	int threadID  = threadIdx.x;
	if(threadID < N){
	
		c[threadID] = a[threadID] + b[threadID];
	
	}

	}


int main(void){
	

	int a[N], b[N], c[N];
	int *device_a, *device_b, *device_c;

	//allocate memory on the device
	cudaMalloc( (void**)&device_a, N*sizeof(int)  );
	cudaMalloc( (void**)&device_b, N & sizeof(int)  );
	cudaMalloc( (void**)&device_c, N*sizeof(int) );

	for(int i = 0; i<N; i++){
	
		a[i] = i;
		b[i] = i*i;
	}


	// copy arrays a and b to the GPU


	}


