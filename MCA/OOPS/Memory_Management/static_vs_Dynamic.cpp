//Static memory allocation

// int x = 5;
// size and location where variable will be stored is fixed during compile time
// locatoins where variables will be stored is saved,but the actual physical memory is not allocated to variables at compile time.
//allocation will be at runtime only
//static memory allocation is slightly faster than dynamic memory allocation
//allocation and deallocation is done by the copiler itself

//Dynamic memory allocation (DMA)

// DMA allows to define memory requirement during execution of program
// DMA uses heap memory, new keyword is used to allocate the memory and delete keyword to deallocate the memory.
//allocation and deallocation will not happen automatically, you will do it

#include <iostream>
using namespace std;

int& func(int a){
    int num = a;
    int& ans = a;
    return ans;
}

int main(){
    int n = 5;
    func(n);
}
