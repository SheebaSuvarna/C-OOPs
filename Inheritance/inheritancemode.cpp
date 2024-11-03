#include<iostream>
#include<string>
using namespace std;
class Human{

    public:
        string name;
    protected:
        int age;
    private:
        string ssn;

};

class Employee:protected Human{
    public:
        int empid;

        void displayInfo(){
            cout<<"===================\n";
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;        
            //cout<<"SSN: "<<ssn<<endl;  //Cannot be accessed due to private
            cout<<"Employee ID: "<<empid<<endl;
        }
};

class test:public Employee{
    public :
        void display(){
            cout<<"===================\n";
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;        
            //cout<<"SSN: "<<ssn<<endl;  //Cannot be accessed due to private
            cout<<"Employee ID: "<<empid<<endl;
        }
};



int main(){
    // Employee e;   //public mode
    // e.empid = 101;
    // e.name = "Sheeba";
    // //e.age = 23;      //inaccessible because of protected(prints deafult age(random no))
    // e.displayInfo();


    // Employee e;     //protected mode
    // e.empid =102;
    // //e.name = "Suvarna"; //inaccessible bcoz name becomes protected in the derived class
    // //e.age = 23;         //inaccessible bcoz age becomes protected in the derived class
    // e.displayInfo();


    // Employee e;
    // e.empid = 103;
    // e.name = "Padil"; //inaccessible bcoz name becomes private in the derived class
    // e.age = 23;        //inaccessible bcoz age becomes private in the derived class
    // e.displayInfo();

    // test t;
    // t.empid = 103;
    // t.name = "Padil"; //inaccessible bcoz name becomes protected in the derived class(test)
    // t.age = 23;        //inaccessible bcoz age becomes protected in the derived class(test)
    // t.displayInfo();

}