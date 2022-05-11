#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class time
{
int h,m,s;
public:
void getdata();
void display();
time operator-(time t2);
};
void time::getdata()
{
cout<<"\nEnter hour,minutes and seconds\n";
cin>>h>>m>>s;
}
void time::display()
{
cout<<"\nTime is-> "<<setfill('0')<<setw(2)<<h;
cout<<":"<<setfill('0')<<setw(2)<<m;
cout<<":"<<setfill('0')<<setw(2)<<s<<endl;
}
time time::operator-(time t2)
{
time t;
t.h=h-t2.h;


t.m=m-t2.m;
t.s=s-t2.s;
return t;
}
void main()
{
clrscr();
time t1,t2,t3;
t1.getdata();
t1.display();
t2.getdata();
t2.display();
t3=t1-t2;
cout<<"\nTime1 - Time2:\n";
t3.display();
getch();
}