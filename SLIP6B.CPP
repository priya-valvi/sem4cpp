#include<iostream.h>
#include<conio.h>
#include<process.h>
void getdata();
class MATRIX
{
	
int a[5][5];
int row,col;
public:
MATRIX(int x,int y)//constructor
{
row=x;
col=y;
}
~MATRIX()
{
cout<<"Destructor Invoked"<<endl;
}
public:
void getdata()

{
cout<<"Enter elements of matrix:\n";
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++) cin>>a[i][j];
}
}



void display()
{
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
cout<<a[i][j]<<"";
cout<<"\n";
}
}
void transpose()
{
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
cout<<a[j][i]<<"";
cout<<"\n";

}
}
};



void main()
{
int m,n;
clrscr();
cout<<"Enter order of matrix:"; cin>>m>>n;
MATRIX obj1(m,n);
obj1.getdata();
cout<<"Matrix is…";
obj1.display();
cout<<"Transpose of matrix is…\n";
obj1.transpose();
getch();
}
