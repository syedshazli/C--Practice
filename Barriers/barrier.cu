__global__ void barrier(){

    if(threadIdx.x == 0){
        while(true){ // NOTE: WE WANT BARRIER ISSUES

        }
    }
    __syncthreads();
}

int main(){
    barrier<<<1, 16>>>();
}