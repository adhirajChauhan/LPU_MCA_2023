#include <iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "Eating " << endl;
    }
};

class Dog : public Animal{
    public:
    void Bark(){

        cout << "Bark " << endl;
    }
};

class Cat : public Animal{
    void Meow(){

        cout << "Meow " << endl;
    }

};

int main(){
    Cat c1;
    Dog d1;
    d1.eat();
    c1.eat();
}