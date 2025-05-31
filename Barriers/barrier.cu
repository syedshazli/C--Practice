__global__ void barrier(){

    if(threadIdx.x == 0){
        while(true){ // NOTE: WE WANT BARRIER ISSUES

        }
    }
    __syncthreads();
}