/*
    given in a vector, returnall the elements that are strictly smaller than their adjacent left and right neighbour
*/

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

vector<int> compareAdj(vector<int> nums){
    vector<int> temp;

    for(int i = 1; i < nums.size() -1; i++){
        if(nums[i] < nums[i-1] && nums[i] < nums[i+1]){
            temp.push_back(nums[i]);
        }
    }
    return temp;
}

bool isConsecutive(vector<int> nums){
    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size() - 1; i++){
        if(nums[i+1] != (nums[i] + 1)){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> nums = {1,4,2,5,8,7,3};
    // cout << "unsorted " << " " << endl;
    // for(int x:nums){
    //     cout << x << " ";
    // }
    // cout << endl;
    // sort(nums.begin(), nums.end());

    // cout << "sorted " << " " << endl;
    // for(int x:nums){
    //     cout << x << " ";
    // }


    vector<int> ans = compareAdj(nums);
    cout << "Elements smaller than adjecent are : " << " ";
    for(int i : ans){
        cout << i << " ";
    }
}

