#include<iostream>
#include<string>
using namespace std;
class Teacher{              // The class
    public:                  //access specifier
        // properties/attributes
        string name;
        string dept;
        string subject;
        double salary;


        // methods/member functions
        void changeDept(string newdept){
            dept = newdept;
        }
};
int main(){

    Teacher t1;   //Object creation
    t1.name = "Sheeba";               //Assesing and assigning values
    t1.dept = "Computer Science";
    t1.subject ="C++";
    t1.salary = 25000.30;


    //printing the the details of teacher 
    cout << "Name " << t1.name << endl;
    cout << "Department " << t1.dept << endl;
    cout << "Subject "<< t1.subject << endl;
    cout << "Salary " << t1.salary << endl;


    string changeDept = "Information Science";
    //t1.changeDept("Information Science");          //calling the methods(parmetrized method)
    t1.changeDept(changeDept);

    //After chaning the deptNanme
    cout << "Name " << t1.name << endl;
    cout << "Department " << t1.dept << endl;
    cout << "Subject "<< t1.subject << endl;
    cout << "Salary " << t1.salary << endl;
    return 0;   //if successfull return '0' else '1'
}