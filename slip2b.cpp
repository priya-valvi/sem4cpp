#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class Movie
{
public:
int year;
char mname[20];
char dname[15];
int budget;
public:
void accept()
{
cout<<"\nEnter the movie name:-";
cin>>mname;
cout<<"Enter the Release year:-";
cin>>year;
cout<<"\nEnter the Director_Name:-";
cin>>dname;
cout<<"\nEnter the Budget-";
cin>>budget;

}
void display()
{
cout<<"\nThe movie name- "<<mname;
cout<<"\n The Release year- "<<year;
cout<<"\nThe Director_Name- "<<dname;
cout<<"\nThe Budget- "<<budget;
}
};
void main()
{
Movie m[5];
int n,i;
clrscr();
fstream file;
file.open("Movie.txt", ios::in|ios::out);
cout<<"\nEnter the no. of records you want to enter-";
cin>>n;
for(i=0; i<n; i++)
{
m[i].accept();
file.write((char*) & m[i], sizeof(m[i]));
}
cout<<"\nDetails of Movie from the file-: ";
for(i=0; i<n; i++)
{
file.read((char*) &m[i],sizeof(m[i]));
m[i].display();
}
file.close();
getch();
}
