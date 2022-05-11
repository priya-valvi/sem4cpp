#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdlib.h>
#include<string.h>
void searchcity();
char n[10],c[10];
class city
{
public:
int population,city_code;
char name[40],e[10];
void accept()
{
cout<<"\n Enter name of city:";
cin>>name;
cout<<"\n Enter name of city_code:";
cin>>city_code;
cout<<"\n Enter the population of city:";
cin>>population;
}
void sort(city &r1,city &r2)
{

city rt;
if(r1.population>r2.population)
{
rt=r1;
r1=r2;
r2=rt;
}
}
void display()
{
cout<<"\n Name of City :"<<setw(15)<<name<<endl;
cout<<"\n Population :"<<setw(15)<<population<<endl;
cout<<"\n City Code:"<<setw(15)<<city_code<<endl;
}
void searchcity()
{
if(strcmp(name,c)==0)
{
cout<<"\n name: "<<name<<"\n Population.: "<<population;
}
}
};
void main()
{
clrscr();
city t[30];
int num,ch,population;
char cont;
cout<<"\n 1.Accept & display ";
cout<<"\n 2.Ascending";
cout<<"\n 3.Search by city";
do
{
cout<<"\n Enter your choice: ";
cin>>ch;
switch(ch)
{
case 1: cout<<"\n How many records you want to enter: ";
cin>>num;

for(int i=0;i<num;i++)
{
t[i].accept();
}
for(i=0;i<num;i++)
{
t[i].display();
}
break;
case 2:
for(i=0;i<num;i++)
{
for(int j=i+1;j<num;j++)
t[i].sort(t[i],t[j]);
t[i].display();
}
break;
case 3: cout<<"\n Enter city name: ";
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