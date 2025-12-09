#include<bits/stdc++.h>
using namespace std;

/*
    Properties of Friend Functions

    1. Not in the scope of Class
    2. Since it is not in the scope of class , it cannot be called from the object of that class.   
    3. Can be invoked without the help of anby object.
    4. Usually contains the objects as arguments.
    5. Can be declared inside public or private section of the class.
    6. It cannot access the members directly by their names and need object_name.member_name to access any member.
    
*/

class Complex{
    int a;
    int b;
    public:
        void setNumber(int n1,int n2){
            a = n1;
            b = n2;
        }
        
        // Below line allows the sumComplex Function(non member function) to do anything with my private members
        friend Complex sumComplex(Complex o1,Complex o2);

        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));

}

int main(){
        Complex c1,c2,sum;

        c1.setNumber(1,4);
        c1.printNumber();
        
        c2.setNumber(5,8);
        c2.printNumber();

        sum = sumComplex(c1,c2);
        sum.printNumber();


    return 0;
}

