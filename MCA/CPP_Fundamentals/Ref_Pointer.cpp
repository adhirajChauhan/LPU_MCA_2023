#include <iostream>
using namespace std;

int main(){
    int var = 5;
    float myFloat = 10.5;


    cout << &var << endl; //address of var in memory
    // cout << &myFloat << endl;

    //Pointer is a variable whose value is the adress of another variable.

    //type *varName;
    int *ptr;
    ptr = &var;

    cout << ptr << endl;
    cout << *ptr << endl; //derefrencing the pointer
}