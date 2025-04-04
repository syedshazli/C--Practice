


/**
  * The Julia Set evaluates a iterative equation for points in a complex plane
  *A point isn't in the set if iterating the equation diverges for that point
  * AKA grows towards infinity
  * Otherwise, it's in the set
  */


// a single precision component r
// a single precision imaginary component i
// defines addition and muktiplication operators
struct cuComplex{

	float r;
	float i;

	// initialise constructor
	cuComplex(float a, float b) : r(a), i(b){}
	
	float magnitude2(void) {return r * r + i * i;}

	cuComplex operator*(const cuComplex& a){
	
		return cuComplex (r*a.r - i*a.i, i*a.r + r*a.i);
	}


	cuComplex operator+(const cuComplex& a){
	
	return cuComplex(r+a.r, i+a.i);	
	}


};


// translate pixel coordinate to coordinate in complex space
// shift by DIM/2 to center the complex plane to the center
// want image ti span in -1,  1, so we scale by DIM/2
// which explains the jx, jy
// if we want to zoom in or out, we adjust the scale factor
// we find out if the number in a julia set by computing the equation in the book
// can adjust the constant c from the cuComplex object


// 200 iterations, does the result exceed a threshold?
// if so, return 0, otherwise, if all iterations finished, return 1;
int julia(int x, int y){

	const float scale  = 1.5;
	float jx  = scale * (float) (DIM/2 - x)/ (DIM/2);
	float jy = scale * (float) (DIM/2 -y) / (DIM/2);

	cuComplex c(-0.8, 0.156);
	cuComplex a (jx, jy);

	int i = 0;
	for(i = 0; i<200; i++){
	
		a = a*a +c;
		if(a.magnitude2()>1000)
		{return 0;}
	}
	
	return 1;
}



void kernel(unsigned char *ptr){

	// iterate through all points we want to render
	// calling julia on each to determine if it's in the juliaSet
	// julia returns 1 if the point is in the set and 0 if not
	// point color is red if julia is 1 and black otherwise
	for(int y = 0; y<DIM; y++){
	
	   for(int x  = 0; x<DIM; x++){
	   
	   
		   int offset = x+y * DIM;
		   int juliaValue = julia(x,y);

		  ptr[offset*4+0] = 255 * juliaValue;
		  ptr[offset*4 +1] = 0;
		  ptr[offset*4 +2] = 0;
		  ptr[offset*4 +3] = 255;


	   }
	}


}


int main(void){

	CPUBitmap bitmap(DIM, DIM);
	unsigned char *ptr = bitmap.get_ptr();

	kernel(ptr);

	bitmap.display_and_exit();

}
