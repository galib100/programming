#include<bits/stdc++.h>
using namespace std;
class Employee{
    public:
int id;
int salary;
int hours_worked;
int CalculateSalary(int hours_worked){
return (hours_worked*100);
}

};
int main(){
int id,hworked;
cout<<"enter the id of the Employee"<<endl;
cin>>id;
cout<<"Enter the Hours_worked "<<endl;
cin>>hworked;
Employee emp1;

emp1.id=id;
emp1.hours_worked=hworked;
emp1.salary= emp1.CalculateSalary(hworked);
cout<<"Employe Id: "<<emp1.id<<" S5alay : "<<emp1.salary <<"Tk "<<endl;
}
