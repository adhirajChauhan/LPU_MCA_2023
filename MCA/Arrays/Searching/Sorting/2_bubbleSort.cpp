#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size-1; i++){
        bool swapped = false;
        for(int j = 0; j < size-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if(swapped == false){
            break;
        }
    }
}

int main(){
    int arr[6] = {4,2,6,3,9,8};
    // int arr[6] = {1,2,3,4,5,6};


    cout << "Unsorted array ";
    for(int i = 0; i<6; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, 6);

    cout << "Sorted array ";
    for(int i = 0; i<6; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}