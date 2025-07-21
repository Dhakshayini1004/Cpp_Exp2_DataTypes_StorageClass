//PRN : 24070123039  A2
//Name : Dhakshayini Usha R
#include<iostream>
using namespace std;

int a =5;
void func(){
    extern int a;
  //You cannot initialize extern variables inside functions.
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
Address of func variable a: 0x404040
Size of variable: 4
The variable is :6

Address of func variable a: 0x404040
Size of variable: 4
The variable is :7

Address of func variable a: 0x404040
Size of variable: 4
The variable is :8

The variable is :8
Address of global variable a: 0x404040 
*/
