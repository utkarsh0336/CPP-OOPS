#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a,b;
    public:
        
        Complex(int,int);  

        void printData(void){
            cout<<"Your number is "<< a << " + " <<b<<"i"<<endl;
        }
};

Complex :: Complex(int x,int y){  // This is called parameterise constructor as it takes 2 parameters.
    a = x;
    b = y;
}

class Point{
    int x,y;
    public:
        Point(int a,int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<","<<y<<")"<<endl;
        }
};



int main(){
    Complex a(3,4);
    a.printData();

    Complex b = Complex(5,7);
    b.printData();

    // Above both initialisations are same.

    Point p(1,1);
    Point q(4,6);

    p.displayPoint();
    q.displayPoint();



    return 0;
}