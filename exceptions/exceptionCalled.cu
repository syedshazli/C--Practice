
// a basic example of an exception being called in cuda-gdb
__global__ callMe(int *dev_a){
    int tid = blockIdx.x * blockDim.x + threadIdx.x;
    // exception thrown here.
    dev_a[tid+10000] = tid;
}


int main(){

    int *dev_a;
    int host_a[4];
    cudaMalloc( (void**) &dev_a, sizeof(int)*4);
  
    callMe<<<1, 16>>> (dev_a);

    cudaMemcpy(host_a, dev_a, 4*sizeof(int), cudaMemcpyDeviceToHost);
}