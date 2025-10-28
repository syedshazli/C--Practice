#include <iostream>
#include <vector>
#include <set>

template<typename T>
void print(std::vector<T> array)
{
    for (auto val : array){
        std::cout<<val<<std::endl;
    }
    std::cout<<"End of array!"<<std::endl;
}
int main()
{
    std::vector<int> eraseVector = {2, 4, 6, 8};
    print(eraseVector);

    // compile with --std=c++20
    /**
    
    Params: 

    c	-	container from which to erase (such as myVec)
    value	-	value to be removed
    pred	-	unary predicate which returns ​true if the element should be erased.

     */
    auto erased = std::erase_if(eraseVector, [] (int x) {return (x -5) < 0; });

    print(eraseVector);

    

}