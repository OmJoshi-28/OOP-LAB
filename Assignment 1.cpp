#include<iostream>
using namespace std;

class Book
{
public:
int id;
string title;
string author;
float price;

void disp()
{
cout<<"Enter Book ID: ";
cin>>id;
cout<<"Enter Book title: ";
cin>>title;
cout<<"Enter author of the Book: ";
cin>>author;
cout<<"Enter Price: ";
cin>>price;
}
};

int main()
{
Book b1;
b1.disp();

return 0;
}
