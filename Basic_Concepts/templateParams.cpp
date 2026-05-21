#include <iostream>


// inspiration for exploring this topic was done after seeing a functions ignature like 
//'template <typename input_type_, typename output_type_, int m_, int n_, int k_, int repetitions_ = 128>
//__device__ inline void tops_tc_cuda_kernel() {

// When the function wasnt a part of any class that would contain those arguments

template<int val>
void printStatus(int param)
{
std::cout<<"The parameter valie is "<<param<<" while the template value is " <<val <<std::endl;
}

int main()
{
printStatus<3>(2);
}