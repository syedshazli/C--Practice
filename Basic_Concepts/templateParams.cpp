#include <iostream>


// inspiration for exploring this topic was done after seeing a functions ignature like 
//'template <typename input_type_, typename output_type_, int m_, int n_, int k_, int repetitions_ = 128>
//__device__ inline void tops_tc_cuda_kernel() {

// When the function wasnt a part of any class that would contain those arguments

// if we want this to be passed in, we must specify the type here
template<int val>
void printStatus(int param)
{
std::cout<<"The parameter valie is "<<param<<" while the template value is " <<val <<std::endl;
}

// can still have templated values as well as multiple params passed, but not floats
template<typename dType, int val, int secondVal>
void printTwo(dType dataType)
{
    std::cout<<"The templated value passed in was "<<dataType<<" while the first integer passed in thru templated parameters was "<<val<<" while the second was " <<secondVal<<std::endl;
}

int main()
{
printStatus<3>(2);
printTwo<int, 3, 5>(7);
}