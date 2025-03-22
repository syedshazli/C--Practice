#include <iostream>
// find more on page 30 of the book

using namespace std;

int main(void){
	cudaDeviceProp prop; // initialise cudaDevice Info struct as object 'prop'
	int count;
	cudaGetDeviceCount(&count);
	for(int i =0; i< count; i++){
	cudaGetDeviceProperties(&prop, i);
	// now that the device properties are loaded into the struct
			// let's see what we can find

	// some things that might be interesting
	cout<<"---General informaiton for device---"<<endl;
	cout<<"Name of GPU: "<<prop.name<<endl;
	cout<<"Compute capability: "<<prop.major<<"and " <<prop.minor<<endl;	    cout<<"Clock rate: "<<prop.clockRate<<endl;
	
	cout<<"---Memory Information---"<<endl;
	cout<<"Total global memory: "<<prop.totalGlobalMem<<" bytes"<<endl;
	cout<<"Total constant memory: "<<prop.totalConstMem<<endl;
	cout<<"Max mem pitch: "<<prop.memPitch<<endl;
	
	cout<<"---Multiprocessor Info for device "<<i<<endl;
	cout<<"Multiprocessor count: "<<prop.multiProcessorCount<<endl;
	cout<<"Shared memory per multiprocessor: "<<prop.sharedMemPerBlock<<" bytes"<<endl;
	cout<<"32 bit Registers per multiprocessor: "<<prop.regsPerBlock<<endl;
	cout<<"Threads in warp: "<<prop.warpSize<<endl;
	cout<<"Max threads per block: "<<prop.maxThreadsPerBlock<<endl;

	}//end of for loop

}
