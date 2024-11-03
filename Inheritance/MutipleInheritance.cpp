//When a derived class(child class) inherits more than one base class(parent class), it is called multiple inheritance.
#include<iostream>
using namespace std;
class Salary{
    public :
        double sal;

        double setSalary(double s){
            sal = s;
        }

        double getSalary(){
            return sal;
        }

        void fun(){
            cout << "Salary function \n";
        }

};

class Bonus{
    private:
        double bonus;

    public:
        double setBonus(double b){
            bonus = b;
        }

        double getBonus(){
            return bonus;
        }

        void fun(){
            cout << "Bonus function \n";
        }
};

class Derived : public Salary, public Bonus{
    public:
        void displayInfo(){
            cout << "Salary is " << getSalary() << endl;
            cout << "Bonus is  " << getBonus() << endl;
            cout << "Total Salary is " << (getSalary()+getBonus()) << endl;
        }
        


};

int main(){

    Derived d;
    d.setSalary(200);
    d.setBonus(600);
    d.displayInfo();
    //d.fun();   //this cause ambiguous //Compiler gets confused which fun it refers (from which parent)

    // Resolve ambiguity by specifying the class name
    d.Salary::fun();  // Calls Salary's fun()
    d.Bonus::fun();   // Calls Bonus's fun()

    
}