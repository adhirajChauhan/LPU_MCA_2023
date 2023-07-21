#include <iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int k){

    if(s > e){
        return false;
    }

    int mid = (s+e)/2;

    if(arr[mid] == k){
        return true;
    }

    if(arr[mid] < k){
        //goto right part
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        //goto left part
        return binarySearch(arr, s, mid-1, k);
    }

}

int main(){
    int arr[6] = {3,4,5,7,8,10};

    int size = 6;
    int key = 7;

    cout << binarySearch(arr,0,size-1,key);
}