#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
const int m=50;
class emp{
	public:
		int empcode;
		char empname[20];
	public:
		void get(){
			cout<<"\nEnter Employee Code:";
			cin>>empcode;
			cout<<"\nEnter EMployee Name:";
			cin>>empname;

		}
};
class fulltime: public emp
{
	public:
	int no_of_days,daily_wages,salary1;
	public:
	void getdata(){
		cout<<"\nEnter_no_of_day:";
		cin>>no_of_days;
		cout<<"\n Enter daily wages:";
		cin>>daily_wages;

	}

	void cal(){
		salary1=no_of_days*daily_wages;
		cout<<"\nfull time salary:"<<salary1;

	}

	void show(){
		cout<<"\n----------------------\n";
		cout<<"\n Employee Number: "<<empcode;
		cout<<"\n Employee Name:"<<empname;
		cout<<"\n FullTime Salary:"<<salary1;
		cout<<"\n----------------------\n";


	}

};
class parttime: public emp{
	public:
	int number_of_working_hours,hourly_wages,salary2;
	public:
	void get1(){
		cout<<"\n Enter hourly Rate:";
		cin>>hourly_wages;
		cout<<"\n Enter Working Hours:";
		cin>>number_of_working_hours;
		}
	void cal1(){
		salary2=hourly_wages*number_of_working_hours;
		cout<<"\n part time salary:"<<salary2<<endl;
		}

	void show1(){
		cout<<"\n-------------------\n";
		cout<<"\n Employee Number:"<<empcode;
		cout<<"\n Employee name:"<<empname;
		cout<<"\nPartTime Salary:"<<salary2;
		cout<<"\n-------------------\n";

		}
	

};
int main(){
	clrscr;
	int num,ch,k,l,cnt;
	fulltime f1[4];
	parttime p1[5];
	cout<<"\n 1. Enter Details of Employee of Fulltime";
	cout<<"\n 2.Entre details of employeee of parttime";
	cout<<"\n 3.Fulltime Highest Salary";
	cout<<"\n 4.Parttime Highest Salary";
	cout<<"\n 5.Exit";

	  do{
	      cout<<"\n Enter your choice:";
	      cin>>ch;
	      switch(ch){
		case 1:
		       cout<<"\n How many records you wish to enter for fulltime:";
		       cin>>k;
		       for(int i=0;i<k;i++)
		       {
		       f1[i].get();
		       f1[i].getdata();
		       f1[i].cal();
		       f1[i].show();
		       }
		       break;
		case 2:
			cout<<"\n How many records you wish to enter for partime:" ;
			cin>>l;
			for(i=0;i<l;i++)
		       {
			p1[i].get();
			p1[i].get1();

			p1[i].cal1();
			p1[i].show1();
			}
			break;
		case 3:
			cout<<"\n How many employee you want to display:";
			cin>>cnt;
			int temp=0;
			for(i=1;i<=cnt;i++)
			{
			f1[i].show();
			}

		  for(i=1;i<=cnt;i++)
			{
			if(f1[temp].salary1<f1[i].salary1)
			temp=i;
			}
			cout<<"\n Employee with highest salary is:"<<f1[temp].salary1;
			cout<<"\n and employee name is:"<<f1[temp].empname;
			break;
		case 4:
			cout<<"\n How many employee you want to display:";
			cin>>cnt;
			for(i=1;i<=cnt;i++)
			{
				p1[i].show1();
			}

			for(i=1;i<=cnt;i++)
				{
			f1[i].show();
			}

			for(i=1;i<=cnt;i++)
			{
			if(p1[temp].salary2<p1[i].salary2)
			temp=i;
			}
			cout<<"\n Employee with highest salary is:"<<p1[temp].salary2;
			cout<<"\n and employee name is:"<<p1[temp].empname;
			break;
		case 5:
		exit(0);
	      }
	  }while(ch!=0);

	getch();
	return 0;



}