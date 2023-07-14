#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    int mid = (start+end)/2;

    while(start <= end){

        //if key is present at mid
        if(arr[mid] == key){
            return mid;
        }

        //if key is greater than mid
        if(key > arr[mid]){
            start  = mid + 1;
        }

        //if key is less than mid
        else{
            end = mid - 1;
        }

        mid = (start+end)/2;
    }
    return -1;
}

int main(){

    int oddArr[5] = {2,3,5,7,9};
    int evenArr[6] = {2,3,5,7,9,10};

    int oddIndex = binarySearch(oddArr, 5,17);
    cout << "Index of 17 is : " << oddIndex << endl;

    int evenIndex = binarySearch(evenArr, 6,10);
    cout << "Index of 10 is : " << evenIndex << endl;

}