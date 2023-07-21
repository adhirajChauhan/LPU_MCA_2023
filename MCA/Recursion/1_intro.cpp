#include <iostream>
using namespace std;
 
// When a function calls itself directly or indirectly, the process is called recursion and this call is called a recursive call.

//if the solution of a problem depends on a smaller problem (subproblem) of same type, then we will use recursion.

int factorial(int n){
    //base case
    if(n == 0){
        return 1;
    }

    int smallProblem = factorial(n-1);
    int biggerProblem = n * smallProblem;

    return biggerProblem;

    // return n * factorial(n-1);

}

int power(int n){
    //base case
    if(n == 0){
        return 1;
    }

    int smallerProblem = power(n-1);
    int biggerProblem  = 2 * smallerProblem;

    return biggerProblem;

    // return 2 * power(n-1);

}

int main(){

    int ans = factorial(5);
    cout << "Factorial is : " << ans << endl;

    int ans2 = power(2);
    cout << "Power ans : " << ans2 << endl;

}