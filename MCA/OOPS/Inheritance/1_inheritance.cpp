#include <iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout << "Barking...";
    }
};

int main(){
    Dog dog1;
    dog1.eat();
}


/*
    - Derived class - class derived from base class

    - Syntax of Derived class 

    class derived_class_name : visibility_Mode base_class_name{

        visibility_Mode - public, private, protected

        Body
    }
*/