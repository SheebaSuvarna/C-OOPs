#include<iostream>
#include<string>
using namespace std;
class A{
    public:
        string a = "a";
};

class B : public A{
    public:
        string b = "b";
        //has a string 'a'
};

class C : public B{
    public:
     string c = "c";
     //has string 'a'
     //has string 'b'
};
int main(){
    A objA;
    cout << "Class A members" << endl;
    cout << "String a = " << objA.a << endl;

    B objB;
    cout << "=======================" << endl;
    cout << "Class B members" << endl;
    cout << "String a = " << objB.a << endl;
    cout << "String b = " << objB.b << endl;

    C objC;
    cout << "=======================" << endl;
    cout << "Class C members" << endl;
    cout << "String a = " << objC.a << endl;
    cout << "String b = " << objC.b << endl;
    cout << "String c = " << objC.c << endl;

    
}