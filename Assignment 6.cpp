#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int rno;
    static string clgname;

    student(string n, int r)
    {
        name = n;
        rno = r;
    }

    void disp()
    {
        cout << "name of the student:- " << name << endl;
        cout << "roll no of the student:- " << rno << endl;
        cout << "college name of the student:- " << clgname << endl;
    }
};
string student::clgname = "MIT";

int main()
{
    student s1("anirudh", 123);
    s1.disp();

    student s2("dada", 124);
    s2.disp();

    return 0;
}
