#include <iostream>
using namespace std;

//Function Overloading - we can use two functions having same name and different parameters(either type of number of argumets)

//Function with 2 int parameters
int sum(int num1, int num2){               //1
    return num1 + num2;
}

double sum (double num1, double num2){     //2
    return num1 + num2;
}

int sum(int num1, int num2, int num3){     //3
    return num1 + num2 + num3;
}

int main(){

    cout << "Sum 1 = " << sum(2,4) << endl;

    cout << "Sum 2 = " << sum(2.2,4.5) << endl;

    cout << "Sum 3 = " << sum(2,4, 6) << endl;

}