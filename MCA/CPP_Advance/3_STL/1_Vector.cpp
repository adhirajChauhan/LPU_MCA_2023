#include <iostream>
using namespace std;
#include <vector> 

/*
vectors are used to store elements of similar data types.
but unlike arrays, size of a vector can grow dynamically
*/

int main(){

//Declare
vector<int> num  = {1,2,3,4,5};

    cout << "Original Vector -> ";
    for(int i : num){
        cout << i << " ";
    } cout << endl;

    //Add elements in a vector
    num.push_back(6);
    num.push_back(7);

    //Access
    // cout << "Element at 1 index is : " << num.at(1) << endl; 

    //Change
    num.at(1) = 9;
    cout << "Vector before deletion -> ";
    for(int i : num){
        cout << i << " ";
    } cout << endl;

    //Delete
    num.pop_back();

    cout << "Updated Vector -> ";
    for(int i : num){
        cout << i << " ";
    } cout << endl;
}


//size() -> return number of elements present in vector
//front() -> returns the first element of vector
//back() -> returns the last element of vector
//empty() -> return 1/true if vector is empty
//clear() -> remove all elements