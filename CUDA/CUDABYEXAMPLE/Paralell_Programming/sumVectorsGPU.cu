#define N 10


// now run the add function in paralell on the GPU
int main(void){

	
	int a[N], b[N], c[N];
	int *dev_a, int *dev_b, int *dev_c; // pointers to device code

	cudaMalloc( (void **)&dev_a, N*sizeof(int) );
	cudaMalloc( (void **)&dev_b, N*sizeof(int) );
	cudaMalloc( (void **)&dev_c, N*sizeof(int) );


	// fill arrays a and b on the CPU
	for(int i = 0; i<N; i++){
		a[i] = -i;
		b[i] = i*i;
	}


	// copy arrays a and b to the GPU using cudaMemcpy
	cudaMemcpy(dev_a, a, N*sizeof(int), cudaMemcpyHostToDevice);
	cudaMemcpy(dev_b, b, N*sizeof(int), cudaMemcpyHostToDevice);

	add<<<N,1>>>(dev_a, dev_b, dev_c);//<<<N,1>>>, N specifies thread block
	// and we're using 1 block

	// copy arrat 'c' back from GPU to CPU
	cudaMemcpy(c, dev_c, N*sizeof(int), cudaMemcpyDeviceToHost);



	// display the result
	for(int i = 0; i<N; i++){
	
		printf("%d + %d = %d\n", a[i], b[i], c[i] );
	
	}// end of for loop
	
	// free allocated memory
	cudaFree(dev_a);
	cudaFree(dev_b);
	cudaFree(dev_c);
	
	return 0 ;
}

