
#define DIM 1000

struct cuComplex {
 float r;
 float i;
 cuComplex( float a, float b ) : r(a), i(b) {}
 __device__ float magnitude2( void ) {
 return r * r + i * i;
 }
 __device__ cuComplex operator*(const cuComplex& a) {
 return cuComplex(r*a.r - i*a.i, i*a.r + r*a.i);
 }
 __device__ cuComplex operator+(const cuComplex& a) {
 return cuComplex(r+a.r, i+a.i);
 }
};


// device means the code will run on the GPU, not the host
// only callable from other device function or from global functions
// so our main cannot call a function from device
__device__ int julia( int x, int y ) {
 const float scale = 1.5;
 float jx = scale * (float)(DIM/2 - x)/(DIM/2);
 float jy = scale * (float)(DIM/2 - y)/(DIM/2);
 cuComplex c(-0.8, 0.156);
 cuComplex a(jx, jy);
 int i = 0;
 for (i=0; i<200; i++) {
 a = a * a + c;
 if (a.magnitude2() > 1000)
 return 0;
 }
 return 1;
}


// runs on GPU, exact same CPU implementation
__global__ void kernel(unsigned char *ptr){

        // iterate through all points we want to render
        // calling julia on each to determine if it's in the juliaSet
        // julia returns 1 if the point is in the set and 0 if not
// map from threadIdx/BlockIdx to pixel position
 int x = blockIdx.x;
 int y = blockIdx.y;
 int offset = x + y * gridDim.x;
 // now calculate the value at that position
 int juliaValue = julia( x, y );
 ptr[offset*4 + 0] = 255 * juliaValue;
 ptr[offset*4 + 1] = 0;
 ptr[offset*4 + 2] = 0;
 ptr[offset*4 + 3] = 255;

}



int main(void){

CPUBitmap bitmap( DIM, DIM );
 
// hold a copy of data on device
unsigned char *dev_bitmap;
  
 // allows us to hold data
 cudaMalloc( (void**)&dev_bitmap,
 		bitmap.image_size() );


 // allows us to compute over 2D domain
 // we're in 2d, so 3rd dimension gas vakye if 1
 dim3 grid(DIM,DIM);

 // each point can be compared independently (SIMD)
 // one copy of functions for each point we wanna compute
 kernel<<<grid,1>>>( dev_bitmap );
 
 // allows us to copy results back to host
 cudaMemcpy( bitmap.get_ptr(),
 		dev_bitmap,
 		bitmap.image_size(),
 		cudaMemcpyDeviceToHost  );
 
 bitmap.display_and_exit();
 cudaFree( dev_bitmap ); 

}
