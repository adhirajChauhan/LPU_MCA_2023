#include <iostream>
using namespace std;
#include <climits>

int getMin(int arr[], int size){

    int min = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int getMax(int arr[], int size){

    int max = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[10] = {2,3,5,1,88,15,6,10,44,22};

    cout << "Min is -> " << getMin(arr,10) << endl;
    cout << "Max is -> " << getMax(arr,10) << endl;


}