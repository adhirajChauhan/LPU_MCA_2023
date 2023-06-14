#include <iostream>
using namespace std;

//function overloading can happen with multiple function with same name but different parameters;

int add(int num1, int num2){
    return num1 + num2;
}

int add(float num1, float num2){
    return num1 * num2;
}

int add(int num1, int num2, int num3){
    return num1 + num2 + num3;
}

int main(){
    int sumOfTwo = add(2,3);

    int productOfFloat = add(2.2f,3.3f);

    int sumOfThree = add(2,3,4);

    cout << "result of add with two parameters is : " << sumOfTwo << endl;
    cout << "result of product with two parameters is : " << productOfFloat << endl;

    cout << "result of add with three parameters is : " << sumOfThree << endl;

}