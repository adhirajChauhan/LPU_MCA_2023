#include <iostream>
using namespace std;

void square(){
    
    int sq;
    cout << "Enter a number " << endl;
    cin >> sq;

    if(sq > 0){

        cout << "Square = " << sq * sq;
    }

    else{
        throw sq;
    } 
}

int main(){
    // int a, b;

    // cout << "Enter value for a and b " << endl;
    // cin >> a >> b;

    // try{
    //     if(b!=0){
    //         cout  << a/b;

    //     }
    //     else{
    //         throw b;
    //     }

    // }
    // catch(int e){
    //     cout << "Division by zero : " << e << endl;

    // }

    try{
        square();
    }
    catch(int e){
        cout << "Exception caught" << endl;
    }

}