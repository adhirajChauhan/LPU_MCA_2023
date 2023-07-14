#include<iostream>
using namespace std;

int main(){

    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int arr[3][4] = 
    {   
        {1,1,1,1}, 
        {2,2,2,2}, 
        {3,3,3,3}
    };

    //taking input row wise
    // cout << "Enter numbers : " ;
    // for(int row = 0; row < 3; row++){
    //     for(int col = 0; col < 4; col++){
    //         cin >> arr[row][col];
    //     }
    // }

    //take input column wise
    // for(int col = 0; col < 4; col++){
    //     for(int row = 0; row < 3; row++){
    //         cin >> arr[row][col];
    //     }
    // }


    //print
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

}