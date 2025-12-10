#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a,b;

    // Creating a constructor
    public:
        // Constructor is a special member function with same name as of the class. It is automatically invoked.
        // It is used to initialise the objects of the class.
        Complex(void);  // Constructor declaration

        void printData(void){
            cout<<"Your number is "<< a << " + " <<b<<"i"<<endl;
        }
};

Complex :: Complex(void){   // This is a default constructor as it accepts no parameter
    a = 0;
    b = 0;
}

int main(){
    Complex c;
    c.printData();


    return 0;
}


/*
Properties of Constructor :- 
    1. It should be declared in the public section of the class. 
    2. They are invoked whenever the object is created.
    3. They cannot return values and do not have return types.
    4. It can have default arguments
    5. We cannot refer to the address

*/