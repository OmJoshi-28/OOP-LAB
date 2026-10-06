#include <iostream>
using namespace std;

class person
{
public:
    int leg;
    int hand;

    void disp()
    {
        cout << "no. of legs are:- " << leg << endl;
        cout << "no. of hands are:- " << hand << endl;
    }
};

class employee : public person
{
public:
    string name;
    int ID;

    void displ()
    {
        cout << "name is:- " << name << endl;
        cout << "ID is:- " << ID << endl;
    }
};

class manager : public employee
{

public:
    string post;

    void display()
    {
        cout << "post is:- " << post << endl;
    }
};

int main()
{
    manager m1;

    m1.leg = 2;
    m1.hand = 2;
    m1.name = "virat";
    m1.ID = 101;
    m1.post = "assistent manager under om joshi";

    m1.disp();
    m1.displ();
    m1.display();
}
