#include<iostream>
#include<string>
using namespace std;

class A{
    public:
        string a = "a";
        string var = "var";
};

class G{
    public:
        string g = "g";
        string var = "var";
};

class B : public A{
    public:
        string b = "b";
        //hass string 'a'
};

class C : public A,public G{
    public:
        string c = "c";
        //hass string 'a'
        //has string 'g'
        //has string 'var' //cause ambiguity

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

int main()
{
    A objA;
    cout << "Class A members" << endl;
    cout << "String a = " << objA.a << endl;
    cout << "String var = " << objA.var << endl;

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
    cout << "String c = " << objC.g << endl;
    //cout << "String var = " << objC.var << endl; //causes ambiguity
    cout << "string var(A) = " << objC.A::var << endl;
    cout << "string var(G) = " << objC.G::var << endl;

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

    G objG;
    cout << "=======================" << endl;
    cout << "Class G members" << endl;
    cout << "String g = " << objG.g << endl;
    cout << "String var = " << objG.var << endl;

}