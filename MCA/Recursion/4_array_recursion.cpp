#include <iostream>
using namespace std;

void print(int arr[], int n){
    cout << "Size of array is : " << n << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool isSorted(int arr[], int size){

    print(arr, size);

    //base case
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remainigPart = isSorted(arr + 1, size - 1);
        return remainigPart;
    }

}

int getSum(int arr[], int size){
    //base case
    if(size == 0){
        return 0;
    }

    if(size == 1){
        return arr[0];
    }

    int remainingPart = getSum(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;
    return sum;
}


int main(){
    int arr[6] = {2,4,6,18,10,12};
    int size = 6;

    bool ans = isSorted(arr, size);
    if(ans){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }

    cout << getSum(arr, size);
}