#include<iostream>
using namespace std;
class base
{
int no1;
public:
int no2;
base()
{
cout<<"base constructor \n";}
void getdata();
int getno1();
void showno1();
};
class derived: public base
{
int no3;
public:
derived()
{
cout<<"derived constructor\n";}
void add();
void display();
};
void base::getdata()
{
no1=10;
no2=20;
}
int base::getno1()
{
return no1;
}
void base::showno1()
{
cout<<"number 1="<<no1<<"\n";
}
void derived::add()
{
no3=no2+getno1();
}
void derived::display()
{
cout<<"number 1="<<getno1()<<"\n";
cout<<"number 2="<<no2<<"\n";
cout<<"sum"<<no3<<"\n";
}
int main()
{
derived d;
d.getdata();
d.add();
d.showno1();
d.display();

d.display();
return 0;}


