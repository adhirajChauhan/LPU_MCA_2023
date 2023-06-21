#include <iostream>
using namespace std;

//MUltiple inheritance, a class can inherit more than one class. Meaning a single child can have multiple parent classes

//Parent
class Animal{
    public:
    void eat(){
        cout << "Eating " << endl;
    }
};

//Parent class
class Dog{
    public:
    void bark(){
        cout << "Barking " << endl;
    }
};

class BabyDog : public Animal, public Dog{
    public :
    void weep(){
        cout << "Weeping " << endl;
    }
};

int main(){
    BabyDog b1;

    b1.bark();
    b1.eat();
    b1.weep();
}
