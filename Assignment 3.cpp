#include<iostream>
using namespace std;

class employee
{
public:

int id;
string name;
string depart;
int salary;

void input()
{
cout<<"id of employee:- ";
cin>>id;
cin.ignore();
cout<<"name of employee:- ";
getline(cin,name);
cout<<"department of employee:- ";
cin>>depart;
cout<<"Salary of employee is:- ";
cin>>salary;
}

void disp()
{
cout<<"\n -------EMPLOYEE DETAILS-------"<<endl;
cout<<"ID of employee is:- "<<id<<endl;
cout<<"Name of employee is:- "<<name<<endl;
cout<<"Department of the employee is:- "<<depart<<endl;
cout<<"Salary of employee is:- "<<salary<<endl;
}
};

int main()
{
employee em1;
em1.input();
em1.disp();

return 0;
}
