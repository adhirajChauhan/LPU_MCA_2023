#include <iostream>
using namespace std;

template <class T>
class Number{
    public:
    T num;


    Number(){

    }

    Number(T val){
        num = val;
    }

    T getNumber(){
        return num;
    }

};

template <typename T>
void display(T val){
    cout << "Value is : " << val << endl;
}

int main(){

    Number<int> n1(2);

    Number<double> n2(2.2);

    cout << "int number : " << n1.getNumber() << endl;
    cout << "double number : " << n2.getNumber() << endl;

    display(10);
    display("Hello");

}