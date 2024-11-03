#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
        string name;
        int age;

        //Constructor
        Person(){
            cout<<"Parent Construtor\n";
        }
        Person(string name, int age):name(name),age(age){}


        //Destructor
        ~Person(){
            cout<<"Parent Desructor\n";
        }
};

class Student:public Person {
    public:
        int rollno;

        //Constructor
        // Student(){
        //     cout<< " Child Construtor\n";
        // }

         Student(string name,int age, int rollno):Person("Neha",23){  //Student Construictor explicitlly calls the Person Constructor
            this->rollno = rollno;
        }

        //Display student Info
        void getInfo(){
            cout<<"Name: "<< name <<"\n";
            cout<<"Age: "<< age <<"\n";
            cout<<"Rollno: "<< rollno <<"\n";
        }

        ~Student(){
            cout<<"Child Destructor\n";
        }
};

int main(){

    //Student s1;   //first call the parent construtor then Child
    // s1.name = "Rahul Kumar";
    // s1.age = 21;
    // s1.rollno = 1234;

    //s1.getInfo();


    Student s2("Sheeba",23,567);
    s2.getInfo();

    return 0;
}