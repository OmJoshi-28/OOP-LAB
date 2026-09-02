#include<iostream>
using namespace std;

class book 
{
public:

string title;
string author;
float price;

book()
{
title ="unknown";
author = "unknown";
price = 0.0;
}

book(string t, string a, float p)
{
title = t;
author = a;
price = p;
}

void disp()
{
cout<<"Title:- "<<title<<endl;
cout<<"Author:- "<<author<<endl;
cout<<"Price:- "<<price<<endl;
}
};

int main()
{
book b1;
book b2("The Alchemist", "Poulo Coelho", 599.9);

cout<<"book 1 (defult)";
b1.disp();

cout <<"_____________________________________________"<<endl<<endl;

cout<<"book 2 (complete)";
b2.disp();

return 0;
}
