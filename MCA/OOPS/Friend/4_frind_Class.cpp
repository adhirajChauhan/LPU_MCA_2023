#include <iostream>
using namespace std;

class Person{
    string name;
    int age;

    public:
    Person(string _name, int _age){
        name = _name;
        age = _age;
    }

    friend class BankAccount;
};

class BankAccount{
    int accountNo;
    int balance;

    public:
    BankAccount(int _accNo, int _bal){
        accountNo = _accNo;
        balance = _bal;
    }

    void displayInfo(Person &person){
        cout << "Account owner : " << person.name << endl; 
        cout << "Account owner's age: " << person.age << endl; 

    }

};


int main(){
    Person person1("Danny",30);
    BankAccount account1(1234,100);

    account1.displayInfo(person1);

}