#define N 10 // 10 threads

// note that all of this code is run on the CPU, no device code written
// pass by reference
void add(int *a, int *b, int *c){

	// takes up a lot more code in the CPU to make sure this runs in paralell
	// especially if we wanted one core to work on say, odd numbered
	int tid = 0;
	while (tid < N){
	c[tid] = a[tid] + b[tid];
        tid +=1; // increment by one because of one CPU	
	
	
	}

}




int main(void){

	int a[N], b[N], c[N];


	// fill arrays on the CPU
	for (int i = 0; i<N; i++){
	
		a[i] = -i;
		b[i] = i * i;
	}
	
	add(a,b,c);
	
	for(int i = 0; i<N; i++){
		
		printf("%d + %d = %d\n", a[i], b[i], c[i]);
	}



	return 0;
}


