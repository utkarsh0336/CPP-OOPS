#include<bits/stdc++.h>
using namespace std;

class Employee{
    int id;
    static int count; // it takes memory only once and gets updated everytime
    // its visibility is inside the class and the  life span is till the program ends
    public:
        void setData(void){
            cout<<"Enter the id : "<<endl;
            cin >> id;
            count++;
            cout<<endl;
        }

        void getData(void){
            cout << "The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
        }

        static void getCount(void){
            cout<<"The value of count is "<<count<<endl;
        }

};

int Employee :: count;  // Default value is 0 and this variable can be initilised , we cannot initialise inside the class

int main(){
    
    Employee harry,rohan,lovish;  // all the objects access the same count variable
    // harry.id = 1;
    // harry.count = 2;  --> cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee :: getCount();

    rohan.setData();
    rohan.getData();
    Employee :: getCount();
    
    lovish.setData();
    lovish.getData();
    Employee :: getCount();


    return 0;
}