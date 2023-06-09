#include <iostream>
using namespace std;

//defination if func
// void myFunction(){
//     cout << "This is a function" << endl;
// }

int power(int base, int power){
    int ans = 1;
    for(int i = 1; i <= power; i++){
        ans = ans * base;
    }
    return ans;
}

void evenOdd(int num){
    if(num%2==0){
        cout << "Number is even " << endl;
    }
    else{
        cout << "Number is odd " << endl;
    }
}

int main(){
    //calling
    // myFunction();

    // int a, b;
    // cin >> a >> b;
    // cout <<"Answer is : " << power(a, b);

    evenOdd(101);

    // int ans = 1;
    // for(int i = 1; i <= b; i++){
    //     ans = ans * a;
    // }
    // cout << "ans is : " << ans << endl;

    // int c, d;
    // cin >> c >> d;

    // ans = 1;
    // for(int i = 1; i <= d; i++){
    //     ans = ans * c;
    // }
    // cout << "ans is : " << ans << endl;

}

//returnType funcName(data_type parameter){
    //body
//}