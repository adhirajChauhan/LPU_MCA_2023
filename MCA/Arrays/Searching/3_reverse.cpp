#include <iostream>
using namespace std;

void reverse(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void print(int arr[], int size){
    for(int i = 0; i < size ; i++){
        cout << arr[i] << " ";
    } cout << endl;
}

int main(){

    int evenArr[6] = {4,3,5,2,9,6};
    int oddArr[5] = {4,3,5,2,9};

    cout << "Original even array -> ";
    print(evenArr, 6);

    reverse(evenArr, 6);

    cout << "Upadted even array -> ";
    print(evenArr, 6);

    cout << endl;


    cout << "Original odd array -> ";
    print(oddArr, 6);

    reverse(oddArr, 6);

    cout << "Upadted odd array -> ";
    print(oddArr, 6);

}



//arr[6] = {3,6,5,7,1,2};
//in the above array, do a linear search and return count of elements in that array are "GREATER THAN EQUAL TO" 5;