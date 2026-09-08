#include <iostream>
using namespace std;
class student
{
public:
    int rno;
    string name;
    int marks;

    student(int rno, string name, int marks)
    {
        this->rno = rno;
        this->name = name;
        this->marks = marks;
    }
    void disp()
    {
        cout << "ROLL NO OF STUDENT:- " << rno << endl;
        cout << "NAME OF STUDENT:- " << name << endl;
        cout << "MARKS OF STUDENT:- " << marks << endl;
    }
};

int main()
{
    student s1(101, "OM", 90);
    s1.disp();

    return 0;
}
