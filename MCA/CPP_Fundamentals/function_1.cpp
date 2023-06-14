#include <iostream>
using namespace std;

void myFunction(string name = "John"){
    cout << "Name is : " << name << endl;
}

int sqaure(int x){
    int sq = x* x;
    return sq; 
}

int main(){
    myFunction("Danny");

    int ans = sqaure(4);
    cout << ans << endl;
}