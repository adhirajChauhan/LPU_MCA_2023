#include <iostream>
using namespace std;
#include <vector> 

/*
Vector iterators are used to point to the memory address of a vector element (similar to pointers)

vector<T>::iterator iteratorName;
*/

int main(){
    // vector<int>::iterator intIterator;
    // vector<double>::iterator doubleIterator;

    vector<int> num = {1,2,3,4,5};

    vector<int>::iterator iter;

    //initialize the iterator at begining
    iter = num.begin();
    cout << "num[0] -> " << *iter << endl;

    //place iterator at 3rd elemet
    iter = num.begin() + 2;
    cout << "num[3] -> " << *iter << endl;

    //iter at end 
    iter = num.end() - 1;
    cout << "num[4] -> " << *iter << endl;

    for(iter = num.begin(); iter != num.end(); iter++){
        cout << *iter << " ";
    }

}