#include <iostream>

using namespace std;

int main(void){
cudaDeviceProp prop;
int dev;

cudaGetDevice(&dev);
cout<<"ID of current CUDA Device: "<< dev<<endl;;

memset(&prop, 0, sizeof(cudaDeviceProp) );
prop.major = 1;
prop.minor = 3;
cudaChooseDevice(&dev, &prop);
cout<<"ID of CUDA Device closest to revision 1.3: "<<dev;
cudaSetDevice(dev);

}
