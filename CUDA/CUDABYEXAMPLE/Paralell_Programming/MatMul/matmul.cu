#include <iostream>
#include <vector>


// host must do cuda malloc on arrays a,b, c
// then a CUDAMEMCPY on array c

using namespace std;

__global__ void matmul(int a[4][4], int b[4][4], int c[4][4], int N){

	int col = threadIdx.x + blockIdx.x * blockDim.x;
	int row = threadIdx.y + blockIdx.y * blockDim.y;
	
	if(row<N && col < N)
	{
	int val = 0;
	for(int k = 0; k < N; k++){
		
		val += a[row][k] * b[k][col];	
	
	}
	
	c[row][col] = val;
	}

}

int main(){
	int a[4][4] = {
        1, 1, 1, 1,
        1, 1, 1, 1,
        1, 1, 1, 1,
        1, 1, 1, 1,
    };

	 int b[4][4] = {
        2, 2, 2, 2,
        2, 2, 2, 2,
        2, 2, 2, 2,
        2, 2, 2, 2,
    };

	int c[4][4] = {
	0, 0, 0, 0,
	0, 0, 0, 0,
	0, 0, 0, 0,
	};

	int (*dev_c)[4];
	dev_c = c;

	// allocate with CUDA MALLOC
	cudaMalloc( (void**) &dev_c, sizeof(c));

	// 4 blocks, 4 threads per block
	matmul<<<4,4>>> (a,b,dev_c, 4);

	// finished computation, store result in dev_c
	int host_c[4][4];
	cudaMemcpy(&host_c, dev_c, sizeof(c), cudaMemcpyDeviceToHost);


	for(int row  = 0; row <4; row++ ){
		
     	   for(int col = 0; col<4; col++){//c++ XD

        	cout<<host_c[row][col]<<','<<' ';

        }
        cout<<endl;
    }
	
}
