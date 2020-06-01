//============================================================================
// Name        : exception.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class exp
{
	int age;
	int income;
	int city;
	int vehicle;

public:
	void getdata()
	{
		cout<<"Enter the age:"<<endl;
		cin>>age;
		cout<<"Enter income:"<<endl;
		cin>>income;
		cout<<"Where are you from:\n1)Mumbai\n2)Pune\n3)Banglore\n4)Chennai\n5)Other"<<endl;
		cin>>city;
		cout<<"which wheeler vehicle do you own:"<<endl;
		cin>>vehicle;
	}
	void display()
	{

	cout<<"Data:\n"<<endl;
		try
		{
			if(age>=18 && age<=55)
			{
				cout<<"Age:"<<age<<endl;
			}
			else
			{
				throw 1;
			}
		}
		catch (int x)
		{
			cerr<<"Age : Invalid Input!(ENTER AGE BETWEEN 18-55)"<<endl;
		}

		try
		{
			if(income>=50000 && income<=100000)
			{
				cout<<"Income:"<<income<<endl;
			}
			else
			{
				throw 1;
			}
		}
		catch (int y)
		{
			cerr<<"Income : Invalid Input! (ENTER INCOME BETWEEN 50000 - 100000)"<<endl;
		}
	}

	void check_city()
	{
		try
		{
			if(city == 1)
			{
				cout<<"City : Mumbai"<<endl;
			}
			else if(city == 2)
			{
				cout<<"City : Pune"<<endl;
			}
			else if(city == 3)
			{
				cout<<"City : Banglore"<<endl;
			}
			else if(city == 4)
			{
				cout<<"City : Chennai"<<endl;
			}
			else
			{
				throw 'h';
			}
		}
		catch (char d)
		{
			cerr<<"City : Invalid data"<<endl;
		}
	}

	void check_vehicle()
	{
		try
		{
			if(vehicle == 4)
			{
				cout<<"Vehicle : 4 wheeler"<<endl;
			}
			else
			{
				throw 4;
			}
		}
		catch(int m)
		{
			cerr<<"Vehicle : Invalid Input"<<endl;
		}
	}
};

int main()
{
	exp p;
	p.getdata();
	p.display();
	p.check_city();
	p.check_vehicle();
}
