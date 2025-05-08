#include <iostream>
#include <vector>

using namespace std;
// pass by reference
void matmul(int A[4][4], int B[4][4], int C[4][4], int N){
    
    for(int row = 0; row < N; row++){
        for(int col = 0; col<N; col++){

            int value = 0;

            // col = 3, tryCols = 3.. what happens??? --> This is OOB

            for(int tryCols = 0; tryCols < N; tryCols++){
                
                value+= A[row][col+tryCols] * B[row+tryCols][col]; // iterate thru matmul


            }
            // set the accumulated dot product to C
            C[row][col] = value;
        }
    }

}

int main(){

    // declare 2d Arrays A & B
    int a[4][4] = {
        1, 1, 1, 1,
        1, 1, 1, 1,
        1, 1, 1, 1,
        1, 1, 1, 1,
    };

    int b[4][4] = {
        2, 2, 2, 2,
        2, 2, 2, 2,
        2, 2, 2, 2,
        2, 2, 2, 2,
    };


    int c[4][4];

    matmul(a,b,c, 4);


    for(int row  = 0; row <4; row++ ){
        for(int col = 0; col<4; col++){//c++ XD

        cout<<c[row][col]<<' ';


        }
        cout<<endl;
    }


}