#include<iostream.h>
#include<conio.h>
class person
{
char name[20];
char addr[20];
float sal,tax;
public:
void get()
{

cout<<"Enter the name, address, salary : \n";
cin>>name>>addr>>sal;
}
void put()
{
cout<<"Person Information:\n";
cout<<"Name\tAddress\tSalary\tTax: \n";
cout<<"=================================================\n";
cout<<name<<"\t"<<addr<<"\t"<<sal<<"\t"<<tax<<endl;
}
void cal_tax()
{
if(sal<=20000) //salary <=20000
{
tax=0;
}
else if(sal>=20000||sal<=40000)//salary >20000 11< =40000 tax rate= 5% of salary.
{
tax=(sal*5)/100;
}
else if(sal >40000) //salary >40000 tax rate =10% of salary
{
tax=(sal*10)/100;
}
}
};
void main()
{
person p;
clrscr();
p.get();
p.cal_tax();
p.put();
getch();

}
