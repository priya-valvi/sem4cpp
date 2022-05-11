#include<conio.h>
#include<iostream.h>
#include<string.h>
int cnt=0;
class string
{
public:int replace(char *str,char c1,char c2);
};
int string::replace(char *str,char c1,char c2='p')
{
int len=0,i;
len=strlen(str);
for(i=0;i<len;i++)
{
if(*(str+i)==c1)
{
*(str+i)=c2;
cnt++;
}
}
cout<<"\nstring after replacing by the given character is:-"<<str;
return cnt;
}
int main()
{
string s1;
char c1,s[50];
int ans;
clrscr();
cout<<"\nenter the string:-";
cin>>s;
cout<<"\nenter the character which occurance is to be search:-";
cin>>c1;
ans=s1.replace(s,c1);
cout<<"\n"<<ans<<" times the replecement has been made";
getch();
return 0;
}