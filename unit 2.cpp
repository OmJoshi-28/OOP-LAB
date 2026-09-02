include <iostream>
using namespace std;
class student
{
public:
int rno;
string name;
int marks;


void input()
{
cout<<"enter the rollno of student:- ";
cin>>rno;

cout<<"enter the name of the student:- ";
cin>>name;

cout<<"enter the marks of the student:- ";
cin>>marks;
}

void disp()
{
cout<<"ROLL NO OF STUDENT:- "<<rno<<endl;
cout<<"NAME OF STUDENT:- "<<name<<endl;
cout<<"MARKS OF STUDENT:- "<<marks<<endl;
}
};

int main()
{
student s1;
s1.input();
s1.disp();

return 0;
}
