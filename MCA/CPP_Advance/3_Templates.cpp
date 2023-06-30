#include <iostream>
using namespace std;

template <class T>
class Calculator{
    T num1, num2;

    public:
    Calculator(T n1, T n2){
        num1 = n1;
        num2 = n2;
    }

    void displayResult(){
        cout << "Numbers : " << num1 << " and " << num2 << endl;

        cout << num1 << " + " << num2 << " = " << add() << endl;
        cout << num1 << " - " << num2 << " = " << sub() << endl;
        cout << num1 << " * " << num2 << " = " << mul() << endl;
        cout << num1 << " / " << num2 << " = " << divide() << endl;
    }
    T add(){ return num1 + num2;}
    T sub() {return num1- num2;}
    T mul() {return num1* num2;}
    T divide() {return num1 / num2;}
};

template <typename T>
void swapValue(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    Calculator<float> cal1(2.2,3.3);

    cal1.displayResult();

}