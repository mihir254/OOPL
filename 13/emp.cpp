//============================================================================
// Name        : employee.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class personal
{
	string name;
	string address;
	int phn[10];
	int age;
	int month;
	int date;
	int year;

public:
	void getdata1()
	{
		cout<<"Enter the name:"<<endl;
		cin>>name;
		cout<<"Enter the age:";
		cin>>age;
		cout<<"Enter the phone number:";
		for(int i=0;i<10;i++)
		{
			cin>>phn[i];
		}
		cout<<"Enter the birth date:"<<endl;
		cin>>date;
		cout<<"Enter the birth month:"<<endl;
		cin>>month;
		cout<<"Enter the birth year:"<<endl;
		cin>>year;
		cout<<"Enter the address:"<<endl;
		cin>>address;
	}
	void display1()
	{
		cout<<"Name:"<<name<<endl;
		cout<<"Age:"<<age<<endl;
		cout<<"Phone Number:";
		for(int i=0;i<10;i++)
		{
			cout<<phn[i];
		}
		cout<<endl;
		cout<<"Birthday:"<<date<<"/"<<month<<"/"<<year<<endl;
		cout<<"The address is:"<<address<<endl;
	}
};

class professional
{
	int exp;
	string com;
	string designation;

public:
	void getdata2()
	{
		cout<<"How many years of experience do you have:"<<endl;
		cin>>exp;
		if(exp!=0)
		{
			cout<<"which company did you work for:";
			cin>>com;
			cout<<"What is your current designation?"<<endl;
			cin>>designation;
		}
	}
	void display2()
	{
		cout<<"Number of years of experience:"<<exp<<endl;
		cout<<"Worked for:"<<com<<endl;
		cout<<"Designation:"<<designation<<endl;
	}
};

class academics
{
	float ssc;
	float hsc;

public:
	void getdata3()
	{
		cout<<"Enter the ssc score:"<<endl;
		cin>>ssc;
		cout<<"Enter the hsc score:";
		cin>>hsc;
	}
	void display3()
	{
		cout<<"The SSC score:"<<ssc<<"%"<<endl;
		cout<<"The HSC score:"<<hsc<<"%"<<endl;
	}
};

class database:public personal,public professional,public academics
{
public:
	void getdata()
	{
		getdata1();
		getdata2();
		getdata3();
	}
	void display()
	{
		cout<<"\n\n\nREPORT:"<<endl;
		display1();
		display2();
		display3();
	}
};

int main()
{
	database ob;
	ob.getdata();
	ob.display();
}
