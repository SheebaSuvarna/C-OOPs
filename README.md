# C++-OOPs
Object Oriented Programming using C++ programming language


**Objects** (is noun/ has a prefix as 'THE') ex: the mug <br>
**Identity** - has its own identity(separte from the other)<br>
**Attributes** - describes it current state<br>
**Behaviors** - the things that it can do (verbs)<br>

**Class** (detailed description/the definition/the template of what an object will be)<br>
Componets :  <br>
**Name/type** - What is it (RoundCookie)<br>
**Attribute/properties/data** -What describes it? (weight, color , icing)<br>
**Behaviours/operations/methods**- What can it do? (decorate(), consume())<br>


**Methods(behaviours written as code)**
procedure that be callled to perform some action and return a value
<br>
**Constructor **(A special method that gets called to create an object)<br>
It does not have a return type<br>
memory alloacation happens when the object is created/constructor is called<br>
It is called automatically when using the keyword new/Object is created<br>
Constructor is always declared as public<br>
Constructor Overloading (same name but diff in number of parameter/type)<br>

**Types of Constructor**
Non -  parameterized <br>
Parameterised <br>
Copy Constructor (speacial /default  constructor used to copy properties of one object into another)<br>
           
**Shallow & Deep Copy**<br>
A Shallow copy of an object copies all of the member values from one object to another.<br>
A deep copy, on the other hand, not only copies the member calues but also makes copies of any dynamically allocated memory that the members point to


Base Class Constructor in Derived Class (Constructor Initialization List)<br>
It allows you to initialize base class members and member variables of the derived class before the body of the constructor is executed.<br>
When the base class has parameterized constructors or when specific initialization is required.<br>
Ensures proper initialization of base class members, especially when the base class has parameterized constructors.<br>

**this keyword**<br>
It is  special pointer in C++ that points to the current object<br>
used to represent thr ptoperties of the object<br>
this->prop is some as *(this).prop ( * operator - dereferencing operator)<br>


(constructor.cpp)<br>

**Destructor/Finalizer** ( A Special method that gets called when the object is destroyed)<br>
opposite of constructor(deallocator)<br>
automatically called by the compiler<br>
deallocates only statically allocated memory<br>
~ClassName(){}<br>


