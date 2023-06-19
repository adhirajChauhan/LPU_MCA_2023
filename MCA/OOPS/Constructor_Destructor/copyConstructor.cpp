#include <iostream>
using namespace std;

class Number{
    int a;

    public:
    //constructor
    Number(){
        a = 0;
        cout << "Constructor invoked" << endl;
    }

    //param cost
    Number(int num){
        a = num;
    }

    //copy
    Number(Number &obj){
        cout << "Copy constructor called" << endl;
        a =obj.a;
    }

    void display(){
        cout << "The number for this obj is : " << a << endl; 
    }


    ~Number(){
        cout << "Destructor Invoked" << endl;
    }
};

int main(){
    Number n1, n2, n3(10);
    n1.display();
    n2.display();
    n3.display();
    
    Number n4(n3);
    n4.display();

}