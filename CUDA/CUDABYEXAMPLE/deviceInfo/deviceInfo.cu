#include <iostream>

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
	cout<<"Name of GPU: "<<prop.name<<endl;
	
	}//end of for loop

}
