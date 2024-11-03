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
        //hass string 'a'
};

class C : public A{
    public:
        string c = "c";
        //hass string 'a'

};
class D: public B{
    public:
        string d = "d";
        //hass string 'a'
        //has string 'b'
};
class E: public B{
    public:
        string e = "e";
        //hass string 'a'
        //has string 'b'

};
class F: public C{
    public:
        string f = "f";
        //hass string 'a'
        //has string 'c'
};
class G:public C{
    public:
        string g = "g";
        //hass string 'a'
        //has string 'c'
};
int main()
{
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
    cout << "String c = " << objC.c << endl;

    D objD;
    cout << "=======================" << endl;
    cout << "Class D members" << endl;
    cout << "String a = " << objD.a << endl;
    cout << "String b = " << objD.b << endl;
    cout << "String d = " << objD.d << endl;

    E objE;
    cout << "=======================" << endl;
    cout << "Class E members" << endl;
    cout << "String a = " << objE.a << endl;
    cout << "String b = " << objE.b << endl;
    cout << "String d = " << objE.e << endl;

    F objF;
    cout << "=======================" << endl;
    cout << "Class F members" << endl;
    cout << "String a = " << objF.a << endl;
    cout << "String b = " << objF.c << endl;
    cout << "String d = " << objF.f << endl;

    G objG;
    cout << "=======================" << endl;
    cout << "Class G members" << endl;
    cout << "String a = " << objG.a << endl;
    cout << "String b = " << objG.c << endl;
    cout << "String d = " << objG.g << endl;
    


}