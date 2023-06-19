#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    string gender;

    //default constructor
    student(){
        cout << "Default constructor invoked" << endl;
    }

    student(string newName, int newAge, string newGender){
        name = newName;
        age = newAge;
        gender = newGender;
    }


    void displayInfo(){

        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;  
        cout << "Gender : " << gender << endl;  

    }

};

int main(){

    student s1("Hello", 1, "M");
    s1.displayInfo();

}

//An object's default constructor is invoked automatically upon creation
//constructor's name is same as the class name
//Default constructor have no parameters, however input arguments are available for copy and parameterized constructors




//----------------------------------------
// Write a C++ class called "Student" that has three private member variables: "name", "age", and "gender". The class should have a constructor that initializes these member variables and a public member function called "displayInfo" that prints out the student's name, age, and gender.




// Write a C++ class called "Rectangle" that has two private member variables: "length" and "width". The class should have a constructor that initializes these member variables and public member functions called "getArea" and "getPerimeter" that return the rectangle's area and perimeter, respectively.
