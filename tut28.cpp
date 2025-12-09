#include<bits/stdc++.h>
using namespace std;

class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }

    friend void add(X,Y);
};

class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
    friend void add(X,Y);
};

void add(X o1, Y o2){
    cout<<"Summing datas of X and Y objects gives me "<<o1.data + o2.num<<endl;
}

class c2;

class c1{
    int val1;
    public:
        void indata(int a){
            val1 = a;
        }

        void display(){
            cout<<val1<<endl;
        }

        friend void exchange(c1 &,c2 &);
};

class c2{
    int val2;
    public:
        void indata(int a){
            val2 = a;
        }

        void display(){
            cout<<val2<<endl;
        }
        friend void exchange(c1 &,c2 &);
};

void exchange(c1 &x, c2 &y){
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main(){
    
    
    // X a;
    // a.setValue(3);

    // Y b;
    // b.setValue(5);

    // add(a,b);

    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(67);

    exchange(oc1,oc2);

    cout<<"The value of c1 after exchanging becomes : ";
    oc1.display();

    cout<<endl;

    cout<<"The value of c2 after exchanging becomes : ";
    oc2.display();

    return 0;
}