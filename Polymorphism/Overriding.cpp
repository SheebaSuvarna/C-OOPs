#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
        string name;
        int rollno;

        //Constructor Overloading
        Student(){
            cout << "\nThis is a student Constructor\n";
        };
        Student(string name, int rollno): name(name),rollno(rollno){}

        //FUnction Overloading
        void display(){
            cout << "\n========Student Details===========\n";
            cout << "Name " << name;
            cout << "\nRollno " << rollno;
        }
        void display(string n, int r){
             cout << "==========Student Details==========\n";
            cout << "Name " << n;
            cout << "\nRollno " << r;
        }

        //Virtual function
        virtual void getInfo(){           //virtual - ensure that child class must reimplement this
            cout <<"\nHello from Parent Class Student\n";
        }
};
class Teacher : Student{
   public:
        string name;
        int tid;

        Teacher(string name, int tid): name(name),tid(tid){}

        //Function Overriding
        void display(){
            cout << "======Teacher Details===========\n";
            cout << "Name " << name;
            cout << "\nTeacher Id " << tid;
        }

        void getInfo(){           //redefine the virtual function in child class
            cout <<"\nsHello from Child class Teacher\n";
        }
};
int main(){
    Student s;
    s.display("John",456);

    Student s1("Sheeba",123);
    s1.display();
   
   Teacher t("Teacher",111);
   t.display();

   //t.getInfo();  //unless you redefine the getInfo in child class you cannot access it bcoz it is made virtual in base class
   s.getInfo();
   t.getInfo();
}