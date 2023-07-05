#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    for(int i = 0; i <= size-1; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

void print(int arr[], int size){
    for(int i = 0; i <= size-1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[10] = {2,3,5,1,88,15,6,10,44,22};
    int arr1[10] = {20,30,50,1,88,15,6,10,44,22};
    int arr2[10] = {2,3,5,1,88,15,60,100,440,22};

    // print(arr1, 10);
    // print(arr2, 10);
    int key;
    cout << "Enter the key ";
    cin >> key;

    bool found = linearSearch(arr,10,key);

    if(found){
        cout << "Key found" << endl;
    }
    else{
        cout << "Key not found" << endl;

    }
}