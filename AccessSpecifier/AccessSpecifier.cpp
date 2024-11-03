#include <iostream>
#include <string>
using namespace std;

// Customer Class -Stores basic customer information
class Customer {
private:
    string name;
    string contactInfo;

public:
    // parametized Constructor - to initalize the data
    Customer(string name, string contactInfo) {
        this->name = name;
        this->contactInfo = contactInfo;
    }

    // non- parametrized Constructor 
    Customer() {
        cout<<"This is non parametrized constructor";
    }

    // Getter for customer name (used in Order class)
    string getName() const {
        return name;
    }

    // Display customer information
    void displayCustomerInfo() const {
        cout << "Customer Name: " << name << ", Contact Info: " << contactInfo << endl;
    }
};

// Order Class: Stores order and payment details, and is linked to a customer
class Order : public Customer {
private:
    string paymentInfo;         // Private payment information
    string invoiceDetails;      // Order-specific details

protected:
    int discountCode;           // Protected discount code (available to employees)

public:
    // Constructor: Initializes both customer info and order details
    Order(string name, string contactInfo, string paymentInfo)
        : Customer(name, contactInfo) // Call to Customer's constructor
    {
        this->paymentInfo = paymentInfo;
        this->discountCode = 12345;  // Default discount code
    }

    // Set invoice details for this specific order
    void setInvoiceDetails(string invoice) {
        invoiceDetails = invoice;
    }

    // Display the invoice associated with this order
    void showInvoice() const {
        cout << getName() << "'s Invoice: " << invoiceDetails << endl;
    }
};

// Employee Class: Inherits from Order and can apply discounts
class Employee : public Order {
public:
    // Constructor for Employee order access (name, contact, payment)
    Employee(string name, string contactInfo, string paymentInfo)
        : Order(name, contactInfo, paymentInfo) {}

    // Employee method to apply a discount
    void applyEmployeeDiscount() {
        cout << "Applying employee discount using code: " << discountCode << endl;
    }
};

int main() {
    // Creating a customer and an order associated with them
    Order customerOrder("Alice", "alice@example.com", "CreditCard1234");
    customerOrder.setInvoiceDetails("Order #001: Margherita - $10");

    // Displaying customer info and their invoice
    customerOrder.displayCustomerInfo();  // Shows Alice's basic info
    customerOrder.showInvoice();          // Shows Alice's order details

    // Employee handling an order
    Employee empOrder("Bob", "bob@example.com", "EmployeeDiscount");
    empOrder.applyEmployeeDiscount();     // Employee applies a discount

    return 0;
}
