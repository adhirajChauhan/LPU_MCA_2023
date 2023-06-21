#include <iostream>
using namespace std;
//Encapsulation - is binding together data members and function that manipulates them

//Features - We cannot access any function from the class directly, we need an object to access that function that is using the member variables of that class
//Increses the security of the data
//It helps to control the modificationof the data members

class Encapsulation{
    private:
    //Data hidden from outside 
    int salary;
    int password;

    public:
    void setEmplyeeInfo(int _salary, int _password){
        salary = _salary;
        password = _password;
    }

    int getEmployeeSalaryInfo(){
        return salary;
    }
};

int main(){
    Encapsulation s1;
    s1.setEmplyeeInfo(500, 1234);
    cout << s1.getEmployeeSalaryInfo() << endl;
    s1.setEmplyeeInfo(10,1111);
    cout << s1.getEmployeeSalaryInfo();

}