//When the derived class inherits only one base class, it is known as Single Inheritance.
#include<iostream>
using namespace std;
class Base{
    private:
        double sal;

    public:
        double setSal(double s){   //Setting the private variable and return
            sal = s;
            return sal;
        }

        double getSal(){
            return sal;
        }
};

class Derived : public Base{
    public:
        double bonus = 600;
        // void set_get_sal(){
        //     setSal(500);  //Set the sal of base class
        //     getSal();      
        // }

        void getBonus() {  //calculate the bonus
            cout<<"Your Salary is " << getSal() << endl;
            cout << "Your Bonus is:" << bonus << endl;
            cout << "Your Total Salary is: " << (getSal()+ bonus) << endl;
        } 

};

int main(){

    Base b;
    b.setSal(900);
    b.getSal();


    Derived d;
    d.setSal(300);
    d.getBonus();
}