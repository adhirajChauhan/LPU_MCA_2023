#include <iostream>
using namespace std;

//operator overloading - we can overload an operator as long as we are operating on user-defined types like objects , structs

//operator overloading is basically function overloading, with different operator functions have the same symbol but different operands

//eg -> overload ++ when used as prefix

class Count{
    private:
    int value;

    public:
    Count(){
        value = 5;
    }

    void operator ++(){
        value = value + 1;
    }

    void display(){
        cout << "Count : " << value << endl;
    }
};

int main(){

    Count count1;

    ++count1;

    count1.display();


}