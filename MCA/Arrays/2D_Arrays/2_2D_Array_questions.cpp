#include <iostream>
#include <climits>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            if(arr[row][col] == target){
                return true;
            }
        }
    }
    return false;
}

void printSum(int arr[][4], int row, int col){
    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int col = 0; col < 4; col++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

//find the largest sum and also find the row with which largest sum belongs to
int rowSum(int arr[][4], int row, int col){
    int maximum = INT_MIN;
    int rowIndex = -1;
    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int col = 0; col < 4; col++){
            sum += arr[row][col];
        }
        if(sum > maximum){
            maximum = sum;
            rowIndex = row;
        }
    }
    cout << "Maximum sum is : " << maximum << endl;
    cout << "Row with maximum sum is ";
    return row;
}

int main(){
    int arr[3][4] = {100,2,3,4,5,6,7,8,9,10,11,12};

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout << arr[row][col] << " ";
        } cout << endl;
    }

    cout << "Element to search ";
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 4)){
        cout << "Element is present" << endl;
    }
    else{
        cout << "Element is not present" << endl;
    }

    printSum(arr,3,4);

    cout << rowSum(arr, 3, 4) << endl;
}