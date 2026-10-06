#include<iostream>
using namespace std;

class person
{
    public:

    string name;
    int age;
    string contact;

    void disp()
    {
        cout<<"name of student:- "<<name<<endl;
        cout<<"age of student:- "<<age<<endl;
        cout<<"Contact no. of student:- "<<contact<<endl;
    }
};

class student : public person

{
    public:

    int rno;
    string branch;

    void show()
    {
      cout<<"roll no of student:- "<<rno<<endl;
      cout<<"branch of the of student:- "<<branch<<endl;
    }
};

int main()
{
    student s1,s2;


    s1.name = "om";
    s1.age = 18;
    s1.contact = "8296107852";
    s1.rno = 1;
    s1.branch = "AI/ML";

    s2.name = "virat";
    s2.age = 50;
    s2.contact = "7307364446";
    s2.rno = 27;
    s2.branch = "AI/ML";

    cout<<" ------student 1------"<<endl<<endl;
    s1.disp();
    s1.show();
    cout<<"------student 2-------"<<endl<<endl;
    s2.disp();
    s2.show();
}
