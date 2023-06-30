#include <iostream>
#include <math.h>
using namespace std;
/*
Abstraction means displaying only essential information and hiding the details.
we only provide essential informtion to outside world, and hiding the implementation/background details

advantages -
Help to increase the security of an application/program as only  important details are provided to the user.

helps the user to avoid writing low level code

can change the internal implementation of class independently 
*/

int main(){
    int n = 2;

    int power = 10;

    int ans = pow(n, power);

    cout << ans;
    

}