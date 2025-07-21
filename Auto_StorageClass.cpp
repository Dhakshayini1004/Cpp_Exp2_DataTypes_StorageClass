//PRN : 24070123039  A2
//Name : Dhakshayini Usha R
#include<iostream>
using namespace std;

int a =5;
void func(){
    auto a = 4;
  // auto cannot be combined with a datatype specifier.
    cout<<"Address of func variable a: "<<&a<<endl;
    a++;
    cout<<"Size of variable: "<<sizeof(a)<<endl;
    cout<<"The variable is :"<<a<<endl;
    cout<<endl;
}

int main(){
    func();
    func();
    func();
    cout<<"The variable is :"<<a<<endl;
    cout<<"Address of global variable a: "<<&a;
    return 0;
}
/*
Sample Output
Address of func variable a: 0x7fff3392d2fc
Size of variable: 4
The variable is :5

Address of func variable a: 0x7fff3392d2fc
Size of variable: 4
The variable is :5

Address of func variable a: 0x7fff3392d2fc
Size of variable: 4
The variable is :5

The variable is :5
Address of global variable a: 0x404040*/
