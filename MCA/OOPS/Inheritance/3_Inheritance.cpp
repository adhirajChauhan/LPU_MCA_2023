#include <iostream>
using namespace std;

//MultiLevel Inheritance
// When one class inherits from another class, which is further inherited by another class, it is known as multilevel inheritance. the last derieved class acquires all the members of its base class.

class Animal{
    public:
    void eat(){
        cout << "Eating " << endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout << "Barking " << endl;
    }
};

class BabyDog : public Dog{
    public :
    void weep(){
        cout << "Weeping " << endl;
    }
};

int main(){
    BabyDog babyDog1;

    babyDog1.weep();

    babyDog1.bark();

    babyDog1.eat();


}