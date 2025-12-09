#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a;
    int b;

    public:
        void setData(int v1,int v2){
            a = v1;
            b = v2;
        }

        void setDataBySum(Complex o1, Complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printNumber(){
            cout<<"Your complex number is " << a << " + "<< b <<"i"<<endl;
        }
};

class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary = 122;
            cout<<"Enter the ID of Employee: ";
            cin >> id;
        }

        void getId(void){
            cout<<"The ID of this Employee is "<<id<<endl;
        }
};

int main(){
    // Employee harry , rohan , lovish , bubu;
    // harry.setId();
    // harry.getId();

    // Employee fb[4];
    // for(int i = 0; i < 4; i++){
    //     fb[i].setId();
    //     fb[i].getId();
    // }

    Complex c1,c2,c3;

    c1.setData(1,2);
    c1.printNumber();
    c2.setData(3,4);
    c2.printNumber();
    c3.setDataBySum(c1,c2);
    c3.printNumber();







    return 0;
}