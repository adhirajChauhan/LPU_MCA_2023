#include <iostream>
using namespace std;

int main(){
    //arrays
    int arr[7] = {2,3,5,4,5,6,7};

    // cout << sizeof(arr)/sizeof(int);
    // arr[2] = 10;
    // cout << arr[2];
    // string a[3] = {"john", "danny", "james"};
    int totalElements = sizeof(arr)/sizeof(int);
    for(int i =0 ; i < totalElements;i++){
        cout << arr[i] << " ";
    }

    // for(int i : arr){
    //     cout << i << " ";
    // }

}


//create an array of size 10
//take any 10 random and init it
//print all the element


