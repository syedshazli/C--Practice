#include <iostream>
// g++ is automatically dynamically linking
// relying on implementation inside libstdc++ in dynamic linking
// in static link, we don't depend on libstdc++.so
// this is because we got the info we needed from stl and linked it in executable
// dynamic linking: load code we need form shared library into executable
// static linking: code is already linked in executable

// @plt:: procedure linkage table
// needed in dynamic linking, code exists in shared library and we load @ runtime

// while in static std::cout is built into executable
// static linking means a bigger executable than dynamic
int main(){
    std::cout<<"Hello world! ";
    return 0;
}