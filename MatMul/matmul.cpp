#include <iostream>
#include <vector>

using namespace std;
// pass by reference
void matmul(std::vector<std::vector<int>> A, std::vector<std::vector<int>> B, std::vector<std::vector<int>> &C, int N){
    
    for(int row = 0; row < N; row++){
        for(int col = 0; col<N; col++){

            int value = 0;

            // col = 3, tryCols = 3.. what happens??? --> This is OOB

            for(int tryCols = 0; tryCols < N; tryCols++){
                // row stays the same and increment by N in first array A
                // col stays the same and increment by N in second array B
                value+= A[row][tryCols] * B[tryCols][col]; // iterate thru matmul


            }
            // set the accumulated dot product to C
            C[row][col] = value;
        }
    }

}

int main(){

    // declare 2d Arrays A & B
    std::vector<std::vector<int>> a(4, std::vector<int>(4, 1));
    // int a[4][4] = {
    //     1, 1, 1, 1,
    //     1, 1, 1, 1,
    //     1, 1, 1, 1,
    //     1, 1, 1, 1,
    // };

    // int b[4][4] = {
    //     2, 2, 2, 2,
    //     2, 2, 2, 2,
    //     2, 2, 2, 2,
    //     2, 2, 2, 2,
    // };

    // all entries initialised by 2
    std::vector<std::vector<int>> b(4, std::vector<int>(4, 2));


    // initialise with 0, will be filled in by res of A * B in future
    std::vector<std::vector<int>> c(4, std::vector<int> (4,0)  );

    // pass by ref in function so C can be modified
    matmul(a,b,c, 4);


    for(int row  = 0; row <4; row++ ){
        for(int col = 0; col<4; col++){//c++ XD

        cout<<c[row][col]<<' ';


        }
        cout<<endl;
    }


}