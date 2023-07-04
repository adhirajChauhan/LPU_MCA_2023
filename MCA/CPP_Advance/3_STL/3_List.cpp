#include <iostream>
using namespace std;
#include <list>

int main(){
    // list<double> num1 = {1.1,1.2,1.3};
    // list<char> charList = {'a', 'b', 'c', 'd'};
    list<int> num = {1,2,3,4,5};


    list<int>::iterator itr = num.begin();

    cout << "Iterator value is : " << *itr << endl;

    // cout << "Original List Elements : ";
    // for(int number : num){
    //     cout << number << " ";
    // } cout << endl;

    //Add at begin
    // num.push_front(0);

    //Add at rear
    // num.push_back(6);

    //access from front
    // cout << "First Element : " << num.front() << endl;
    // cout << "Last Element : " << num.back() << endl;
    
    //remove first element
    // num.pop_front();
    //remove last element
    // num.pop_back();

    // cout << "New List Elements : ";
    // for(int number : num){
    //     cout << number << " ";
    // } cout << endl;


}

/*
reverse() -> reverse the order of elements
size()-> return num of elements
empty() ->
sort() ->
*/


