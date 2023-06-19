#include <iostream>
using namespace std;

class Student{
    //we will define attribues and behaviours
    //access specifiers -> public, private, protected
    //by default, variables and methods in a class are private
    
    private:
    int password = 1234;
    int age = 10;
    
    public:
    int rollNumber;
    string name;

    void myMethod(int x){
        cout << "Value of number is : " << x << endl;
    }

    //Getters
    int getPassword(){
        return password;
    }

    //setters
    void setPassword(int input){
        password = input;
    }

    int getAge(){
        return age;
    }

    void setAge(int input){
        if(input < 0){
            return;
        }
        age = input;
    }

};

int main(){
    Student s1;
    Student s2;

    s1.name = "John";
    cout << s1.name << endl;
    s2.name = "Danny";
    cout << s2.name << endl;
    s1.myMethod(4);
    cout << "Old password of S1 is " << s1.getPassword() << endl;
    s1.setPassword(9876);
    cout << "New password of S1 is " << s1.getPassword() << endl;

    cout << "Old age of S1 is " << s1.getAge() << endl;
    s1.setAge(-100);
    cout << "New age of S1 is " << s1.getAge() << endl;


}