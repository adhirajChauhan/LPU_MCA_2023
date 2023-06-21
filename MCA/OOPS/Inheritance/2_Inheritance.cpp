#include <iostream>
using namespace std;

//Single level
class A{
    private:
    int a = 4;
    int b = 5;

    public:
    int mul(){
        int c = a * b;
        return c;
    }

    protected:
    int x = 5;
};

class B : private A{
    public:

    void display(){
        int result = mul();
        cout << "Multiplication of a and b is : " << result << endl;
    }

    void test(){
        cout << x << endl;

    }
    

};

int main(){

    B b;
    b.display();

}


/*

Base class visibility                                       Derived Class visibility

                                            Public              Private             Protected
Private                                   Not inherited      Not inherited         Not inherited
Public                                      Public              Private             
Protected
*/
