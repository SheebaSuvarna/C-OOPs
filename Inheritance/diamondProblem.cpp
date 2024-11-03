#include<iostream>
#include<string>
using namespace std;
class A{
    public:
        string a = "a";
        void fun(){
            cout<<"This is class A\n";
        }

        void displayA(){
            cout<<"This is display method of class A\n";
        }
};

class B : virtual public A{  //class B does not have direct access to class A , rather it contains a pointer to the class A
    public:
        string b = "b";
        //has the string 'a'

        void fun(){   //overrides class A fun
            cout<<"This is class B\n";
        }

        void displayB(){
            cout<<"This is display method of Class B\n";
        }
};
class C : virtual public A{ //class C does not have direct access to class A , rather it contains a pointer to the class A
    public:
        string c = "c";
        //has the string 'a'

        void fun(){ //overrides class A fun
            cout<<"This is class C\n";
        }


        void displayC(){
            cout<<"This is display method of class C\n";
        }
};

class D :  public B,  public C{
    public:
        string d = "d";
        //has the string 'a'
        //has the string 'b'
        //has the string 'c'

        void fun(){ //overrides class B & C fun
            cout<<"This is class D\n";
        }

        void displayD(){
            cout<<"This is display method of class D\n";
        }
};

int main(){
    D obj;
    cout << "string d = " << obj.d << endl;
    cout << "string c = " << obj.c << endl;
    cout << "string b = " << obj.b << endl;
    //cout << "string a = " << obj.a << endl;   //here 'a' becomes ambiguous 
    //Class D is inherited from 'B' and 'C' so it will contain two copies of 'A' variables
    //Solution - use Virtual inheritance

    obj.fun();
   // obj.displayA(); //cause ambiguity
   // obj.A::displayA(); still provides amibuity

   obj.displayA(); //due to virtual inheritance the ambiuity is removed
   //(class B & C has a pointer that refers to the same loc i.e class A, it does not create multiple copies of class A)

    obj.displayB();
    obj.displayC();
    obj.displayD();

    B obj2;
    cout << "string a = " << obj2.a << endl; 

    C obj1;
    cout << "string a = " << obj1.a << endl; 

}