#include <iostream>
using namespace std;

class B;
class A{
    int x;
    public:
    void setData(int i){
        x = i;
    }
    friend void max(A , B );
};

class B{
    int y;
    public:
    void setData(int i){
        y = i;
    }
    friend void max(A , B );
};

void max(A obj1, B obj2){
    if(obj1.x >= obj2.y){
        cout << "Max is " << obj1.x << endl;
    }
    else{
        cout << "Max is " << obj2.y << endl;

    }
}

int main(){
    A a;
    B b;
    a.setData(10);
    b.setData(20);

    max(a,b);

}