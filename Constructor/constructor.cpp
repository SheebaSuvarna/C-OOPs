#include <iostream>
#include <string>
using namespace std;

// Customer Class -Stores basic customer information
class Customer {
private:
    string name;
    string contactInfo;
    string emailaddress;

public:

    string address="Padil";
     // non- parametrized Constructor 
    Customer() {
        cout<<"I'm non parametrized constructor of Customer Class"<<endl;
    }

    // parametized Constructor - to initalize the data
    Customer(string name, string contactInfo): name(name),contactInfo(contactInfo){
        cout<<"Name :"<<name <<" Contact info"<<contactInfo<<endl;
    } 
    // Customer(string contactInfo, string name): name(name),contactInfo(contactInfo){                   //Compile time error( constructor overriding )
    //      cout<<"Name :"<<name <<" Contact info"<<contactInfo<<endl;
    // }

    //Constructor using this pointer
    Customer(string emailaddress){
        this-> emailaddress = emailaddress;  //this - automactically created pointer variable -->points to the object created(stores the address of obj) -- (*this).emailaddress
    }

    //Copy Constructor
    Customer(Customer &originalObj){  //pass by refrence
            cout<< "I am custom Copy Constructor"<<endl;
            this->name = originalObj.name;
            this->contactInfo = originalObj.contactInfo;

    }

    //Display customer information
    void displayCustomerInfo() const {
        cout << "Customer Name: " << name << ", Contact Info: " << contactInfo << endl;
    }

    ~Customer(){          //descrutor-automatically invoked - dellocates only static object
        cout<<"I am descructor of Customer Class\n";
    }
   
};



// Admin Class: Inherits from Customer Class
class Admin : Customer {     //specifying public ensures the memebers of the base remain private and protected as the base class (by deafult the inheritance will be private)
    public:
        Admin():Customer("Suvarna","987654"){
            cout<<"I'm non parametrized constructor of Admin Class"<<endl;  //here the Customer constructor in first invoked (initialisng list)
        }  

        void DisplayAddress(){
            address = "Mangalore";
            cout<<"Address "<<address<<endl;
        }

        ~Admin(){          //descrutor - automatically invoked - dellocates only static object
            cout<<"I am descructor of Admin Class\n";
        }
        
};       

int main() {
    Customer customer("Sheeba","98786545");
    
    Admin admin;
    //admin.displayCustomerInfo();    //If the inheritance is private -> the member data & function become private
    //admin.address="Mangalorer";
     admin.DisplayAddress();
   
   
   
    Customer customer1(customer);   //deafult copy constructor - invoke  //shallow copy
    customer1.displayCustomerInfo();
   
    return 0;
}
