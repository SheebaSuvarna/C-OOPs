#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
        string name;
        int rollno;

        //Constructor Overloading
        Student(){
            cout << "This is a student Constructor\n";
        };
        Student(string name, int rollno): name(name),rollno(rollno){}

        //FUnction Overloading
        void display(){
            cout << "Student Details\n";
            cout << "Name " << name;
            cout << "\nRollno " << rollno;
        }
        void display(string n, int r){
             cout << "Student Details\n";
            cout << "Name " << n;
            cout << "\nRollno " << r;
        }
};
int main(){
    Student s;
    s.display("John",456);


    Student s1("Sheeba",123);
    s1.display();
   
}