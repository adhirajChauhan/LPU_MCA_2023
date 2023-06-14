#include <iostream>
using namespace std;

int main(){
    // int size;
    // cout << "Enter the size of array : ";

    // cin >> size;

    int arr[5];
    cout << "Enter elements of array : ";
    for(int i = 0; i< 5; i++){
        cin >> arr[i];
    }

    int evenCount = 0, oddCount = 0;

    for(int i = 0; i < 5; i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }

    cout << "Even : " << evenCount << endl;
    cout << "Odd : " << oddCount << endl;


}

//make a array of type int by user input
//Ask the user for length of an array
//ask the user to enter the elements of that array
//find and print that how many even and how many odd numbers are present in that array