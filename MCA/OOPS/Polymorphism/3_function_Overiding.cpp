#include <iostream>
using namespace std;

// /*
//     in below example - same function is defined in both parent and child class. when we call the function by the ojbect of child, the function of child class is executed

//     This is called Function Overriding, the function in the child class overrides the parent class.
// */
// class Parent{
//     public:
//     void print(){
//         cout << "From Parent " << endl;
//     }
// };

// class Child : public Parent{
//     public:
//     void print(){
//         cout << "From Child " << endl;
//         Parent::print();
//     }
// };

// int main(){

//     // Parent p1;
//     // p1.print();

//     Child c1 , c2;
//     c1.print();

//     // c2.Parent::print();

// }





//------------------------Practice

class Base{
    public:
    virtual void print(){
        cout << "From Base class" << endl;
    }
};

class Child : public Base{
    public:
    void print(){
        cout << "From Child class" << endl;
    }
};

int main(){

    // Base b1;
    // Child c1;

    // b1.print();
    // c1.print();

    Base* base;
    Child child;

    base =  &child;
    base->print();

}