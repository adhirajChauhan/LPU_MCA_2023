#include <iostream>
using namespace std;

void update(int n){
    n++;
}

void updateByRef(int &n){
    n++;
}

int main(){
    //normal var
    // int i = 5;

    //reference var
    // int& j = i;

    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++; 
    // cout << j << endl;

    int n = 5;

    cout << "Before -> " << n << endl;
    // update(n);
    updateByRef(n);
    cout << "After -> " << n << endl;

}