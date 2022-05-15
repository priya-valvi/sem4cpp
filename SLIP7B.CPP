#include<conio.h>
#include<iostream.h>
class vector
{
int *a,*b;
int n, n1;
public:
void create()
{
int i,j;
cout<<"\nEnter the dimensions of the vector space: ";
cin>>n;
a=new int[n];
cout<<"\nEnter First the vector: ";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"\nEnter the dimensions of the vector space: ";
cin>>n1;

b=new int[n1];
cout<<"\nEnter Second the vector: ";
for(j=0;j<n1;j++)
{
cin>>b[j];
}
}
void display()
{
int i,j;
cout<<"\n The First vector is: (";
for(i=0;i<n-1;i++)
{
cout<<a[i]<<",";
}
cout<<a[n-1]<<")";
cout<<"\n The Second vector is: (";
for(j=0;j<n1-1;j++)
{
cout<<b[j]<<",";
}
cout<<b[n1-1]<<")";
}
};
void main()
{
vector v;
clrscr();
int ch;
do
{
cout<<"\n 1.Accpet vector \n 2.Display Vetor \n Union";
cout<<"\n Enter choice : ";
cin>>ch;
switch(ch)
{
case 1 : v.create();
break;
case 2 : v.display();
break;
case 3:
vector<int> v(10);
vector<int>::iterator st;
sort (a[i], a[i] + 3);//3 element
sort (b[j], b[j] + 3);
st = set_union(a[i], a[i] + 3, b[j], b[j] + 3, v.begin());
v.resize(st - v.begin());
cout<<"The union between the sets has "<< (v.size())<< " elements: "<<endl;
for (st = v.begin(); st != v.end(); ++st)
cout<< *st<<" ";
break;
}
}while(ch!=3);
getch();
}
