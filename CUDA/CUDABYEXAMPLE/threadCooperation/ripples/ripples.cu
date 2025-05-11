

__global__ void kernel(unsigned char *ptr, int ticks){

	
	// map from threadIDx/BlockIDx to pixel pos
	int x = threadIdx.x + blockIdx.x * blockDim.x;
	int y = threadIdx.y + blockIdx.y * blockDim.y;
	int offset = x + y * blockDim.x * gridDim.x;


	// now calculate the value at that position
	float fx = x-DIM/2;
	float fy = y - DIM/2;
	float d = sqrtf(fx*fx+ fy*fy);





}










