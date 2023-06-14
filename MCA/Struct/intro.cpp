#include <iostream>
using namespace std;

// struct myStruct{
//     int age;
//     string name; 
// };


//Write a program to store and print the roll number, age, name of 3 students (s1, s2, s3)
//using struct

struct cars{
    string color;
    int kmsDriven;
    string brand;
};

struct Student{
    int rollNumber;
    string name;
    int age;
};

int main(){

    Student student1;
    student1.age = 20;
    cout << student1.age;

    cars car1;
    cars car2;

    car1.brand = "Audi";
    car1.color = "Red";
    car1.kmsDriven = 10000;

    car2.brand = "BMW";

    cout << car1.brand << endl;


    // myStruct temp;

    // temp.age = 10;

    // struct{
    //     int age;
    //     string name;
    // } myFriend1, myFriend2, myFriend3;

    // myStruct.age = 20;
    // myStruct.name = "John";

    // cout << myStruct.age << endl;
    // cout << myStruct.name << endl;
}



