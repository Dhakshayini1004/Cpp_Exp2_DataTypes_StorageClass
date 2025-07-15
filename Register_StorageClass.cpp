// PRN : 24070123039  A2
// Name : Dhakshayini Usha R
#include<iostream>
using namespace std;

int a = 5;

void func(){
    register int a = 0;
  //Cannot access the address of variable.
    a++;
    cout << "Size of variable: " << sizeof(a) << endl;
    cout << "The variable is :" << a << endl;
    cout << endl;
}

int main(){
    func();
    func();
    func();
    cout << "The variable is :" << a << endl;
    cout << "Address of global variable a: " << &a;
    return 0;
}
