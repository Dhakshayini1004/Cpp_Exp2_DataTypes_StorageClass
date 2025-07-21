//PRN : 24070123039  A2
//Name : Dhakshayini Usha R
#include<iostream>
using namespace std;

int a =5;
void func(){
    static int a;
    // We utilise the default value 0. THe variable will hold the value irrespective of the number of function calls.
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

/* Sample Output
Address of func variable a : 0x404194
Size of variable           : 4
The variable is            : 1

Address of func variable a : 0x404194
Size of variable           : 4
The variable is            : 2

Address of func variable a : 0x404194
Size of variable           : 4
The variable is            : 3

The variable is            : 5
Address of global variable a : 0x404040
    */
