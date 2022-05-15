#include<iostream.h>
#include<conio.h>
class Number
{
  static int cnt;
  public:
  static void display()
  {
  cout<<"\n Number of time call show:";
  cin>>cnt;
  }
};
int Number::cnt;

void main()
{
  Number s1,s2,s3,s4;
  clrscr();
  s1.display();
  s2.display();
  s3.display();
  s4.display();

  getch();
}