#include <iostream>
using namespace std;

class Complex{
    int real , img;

    public:
    friend Complex sumComplex(Complex x, Complex y);

    void setNumber(int num1, int num2){
        real = num1;
        img = num2;
    }

    //2 + 3i
    //3 + 4i
    //-------
    //5 + 7i
    void printNumber(){
        cout << "Your number is : " << real  << "+" << img << "i" << endl;
    }
};

Complex sumComplex(Complex obj1, Complex obj2){
    Complex z;
    z.setNumber((obj1.real + obj2.real), (obj1.img + obj2.img));
    return z;
}

int main(){

    Complex c1, c2, sum;
    c1.setNumber(1,2);
    c1.printNumber();

    c2.setNumber(3,4);
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();
}