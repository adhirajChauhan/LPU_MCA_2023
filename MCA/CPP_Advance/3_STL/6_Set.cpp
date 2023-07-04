#include <iostream>
using namespace std;
#include <unordered_set>

int main(){

    unordered_set<int> u_set = {10, 30, 20, 60, 20};

    cout << "Numbers : " << endl;
    for(int num : u_set){
        cout << num << " ";
    }
}

//insert() - 
//find()
//count()
//empty()