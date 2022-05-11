#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class worker{
	char name[10];
	int hr;
	public:
	void accept(){
		cout<<"enter name:";
		cin>>name;
		cout<<"enter hours:";
		cin>>hr;

	}
	void cal(int rate=20){
	cout<<"salary of worker is:"<<(hr*10)*rate;
	}

};
void main(){
	worker w;
	clrscr;
	w.accept();
	w.cal();
	getch();
}
