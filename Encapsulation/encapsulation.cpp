#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Pizza {
private:
    string pizzaName;
    double price;

public:
    // Constructor to initialize pizza details
    Pizza(string pizzaName, double price) {
        this->pizzaName = pizzaName;
        this->price = price;
    } 

    // Method to display pizza details
    void displayPizza() const  {   //const ensure 
        cout << "Pizza: " << pizzaName << ", Price: $" << price << endl;
    }

    // Method to get pizza price
    double getPrice() {
        return price;
    }

    // Method to get pizza name
    string getPizzaName() {
        return pizzaName;
    }
     // Method to set pizza price
    void setPrice(double newPrice) {
        price = newPrice;
    }
};
class Customer{
    private:
        string name;
        string contactNo;
    
    public:
        Customer(string name, string contactNo){
            this->name = name;
            this->contactNo = contactNo;
        }

        void displayCustomerInfo(){
            cout << "Customer Name: " << name << ", Contact No: " << contactNo << endl;
        }

        // void viewPizza(Pizza &pizza){  //pass by reference
        //     pizza.displayPizza();

        //     //Change the price of the pizza
        //     pizza.setPrice(pizza.getPrice() + 5.0);        //here customer can update the Pizza Price
        //     cout << "Updated ";
        //     pizza.displayPizza();
        // }      

        void viewPizza(const Pizza &pizza){  //pass by reference  //Const ensure that the customer canot modify
            pizza.displayPizza();
        }  
};


class Order{

};
int main() {
    Pizza pizza1("Margherita", 10.0);
    Pizza pizza2("Pepperoni", 10.0);
    
    Customer customer1("Sheeba","987654321");

    customer1.displayCustomerInfo();
    customer1.viewPizza(pizza1);


    Customer customer2("Suvarna","987654321");

    customer2.displayCustomerInfo();
    customer2.viewPizza(pizza2);
   


    return 0;
}
