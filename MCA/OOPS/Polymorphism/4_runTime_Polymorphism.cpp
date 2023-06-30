#include <iostream>
using namespace std;

class Base{
    public:
    virtual void display(){
        cout << "From Base Class " << endl;
    }
};

class Child : public Base{
    public:
    void display(){
        cout << "From Child Class " << endl;
    }
};

int main(){

    Base* base;
    Child child;

    base =  &child;

    base->display();
}