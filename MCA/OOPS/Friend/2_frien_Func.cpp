#include <iostream>
using namespace std;

class Y; //forward declaration
class X{
    int data;

    public:
    void setValue(int value){
            data = value;
    }

    friend void sum(X obj1, Y obj2);
};

class Y{
    int data;

    public:
    void setValue(int value){
        data = value;
    }   

    friend void sum(X obj1, Y obj2);
};

void sum(X obj1, Y obj2){
    cout << "Adding object value of A and B : " << obj1.data + obj2.data << endl;
}


int main(){
    X x1;
    x1.setValue(10);

    Y y1;
    y1.setValue(20);

    sum(x1, y1);
}