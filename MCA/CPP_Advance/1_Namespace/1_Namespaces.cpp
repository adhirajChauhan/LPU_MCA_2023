#include <iostream>
using namespace std;

namespace Greetings{

    void sayHello(){
        cout << "Hello" << endl;
    }

    void sayHi(){
        cout << "Hi" << endl;
    }

    void morning(){
        cout << "Good morning" << endl;
    }

    void print(){
        cout << "From Greeting namespace" << endl;
    }
}

namespace Wishes{
    void birthday(string name){
        cout << "Happy birthday : " << name << endl;

    }

    void congratulations(){
        cout << "Congratulation" << endl;
    }

    void print(){
        cout << "From Wishes namespace" << endl;
    }
}

int main(){
    Greetings::sayHello();
    Greetings::sayHi();

    Wishes::print();
}