#include<iostream>
using namespace std;
class Student
{
public:
    int rollNum;
    int phoneNum;
    string address;



};
int main()
{
    int roll,phone;
    int Aroll,Aphone;
    cout<<"Enter the Maria Roll Number"<<endl;
    cin>>roll;
    cout<<"Enter the Maria phone Number"<<endl;
    cin>>phone;
    Student Maria;
    Student Asima;
    Maria.rollNum=roll;
    Maria.phoneNum=phone;
    cout<<"Maria Roll Number : "<<Maria.rollNum<<endl;
    cout<<"Maria Phone Number : "<<Maria.phoneNum<<endl;

cout<<endl<<endl;
    cout<<"Enter the Asima Roll Number"<<endl;
    cin>>Aroll;
    cout<<"Enter the Asima phone Number"<<endl;
    cin>>Aphone;

    Asima.rollNum=Aroll;
    Asima.phoneNum=Aphone;
    cout<<"Asima Roll Number : "<<Asima.rollNum<<endl;
    cout<<"Asima Phone Number : "<<Asima.phoneNum<<endl;

}
