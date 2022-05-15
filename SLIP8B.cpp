#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void searchname();
void searchpno();
void searchcity();
char n[10],c[10];
long pno;
class Person
{
char name[10],city[10];
long phoneno;
public:
void get_data()
{
cout<<"\n Enter the Name: ";
cin>>name;
cout<<"\n Enter the phone number: ";
cin>>phoneno;
cout<<"\n Enter the city: ";
cin>>city;

}
void display_data()
{
cout<<"\n Name: "<<name<<"\n Phone no: "<<phoneno<<"\n City: "<<city;
}
void searchname()
{
if(strcmp(name,n)==0)
{
cout<<"\n Name: "<<name<<"\n Phone no: "<<phoneno;
}
}
void searchpno()
{
if((phoneno==pno)==1)
{
cout<<"\n name: "<<name<<"\n Phone no.: "<<phoneno;
}
}
void searchcity()
{
if(strcmp(city,c)==0)
{
display_data();
}
}
};
void main()
{
clrscr();
Person t[30];
int num,ch;
char cont;
cout<<"\n 1.Accept & display customer";
cout<<"\n 2.Search by name";
cout<<"\n 3.Search by phoneno";
cout<<"\n 4.Search by city";

do {
cout<<"\n Enter your choice: ";
cin>>ch;
switch(ch)
{
case 1: cout<<"\n How many Customer you want to enter: ";
cin>>num;
for(int i=0;i<num;i++)
{
t[i].get_data();
}
for(i=0;i<num;i++)
{
t[i].display_data();
}
break;
case 2: cout<<"\n Enter name to search phoneno: ";
cin>>n;
for(i=0;i<num;i++)
{
t[i].searchname();
}
break;
case 3: cout<<"\n Enter telephoneno to search name: ";
cin>>pno;
for(i=0;i<num;i++)
{
t[i].searchpno();
}
break;
case 4: cout<<"\n Enter city name: ";
cin>>c;
for(i=0;i<num;i++)
{
t[i].searchcity();
}

break;
}
cout<<"\n Do you want to continue: ";
cin>>cont;
}
while(cont=='Y'||cont=='y');
getch();
}