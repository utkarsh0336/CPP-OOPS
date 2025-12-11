#include<bits/stdc++.h>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a = 0;
        };

        Number(int num){
            a = num;
        }
        /*
            When no copy constructor is found, compiler supplies its own copy constructor.
            So if we remove the copy constructor defined by ourselves then still we can write Number z1(x) inside our main function
            default copy constructor is created by the compiler.
        */
        Number(Number &obj){
            cout<<"Copy Constructor Called !!!"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main(){

    Number x(10),y,z(45),z2;

    x.display();
    y.display();
    z.display();

    Number z1(x);  //  Copy Constructor invoked
    z1.display();

    z2 = z;  // Copy constructor not called because already banna hua object is assigned to another object.
    z2.display();

    Number z3 = z;  // Copy constructor get invoked because new object z3 is created here.
    z3.display();


    return 0;
}   