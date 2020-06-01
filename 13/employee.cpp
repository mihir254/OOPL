#include<iostream>
#include<stdlib.h>
using namespace std;

class personal
{
	string name;
	string address;
	string phone;
	int age;
	int date;
	int month;
	int year;
public:
	void getdata()
	{
		cout << "Enter the name : ";
		getline(cin, name);
		cout << "\nEnter the address : ";
		getline(cin, address);
		cout << "\nEnter the phone number : ";
		cin >> phone;
		cout << "\nEnter the age : ";
		cin >> age;
		cout << "\nEnter the date, month, year of birth respectively : ";
		cin >> date >> month >> year;
	}

	void display()
	{
		cout << "\n\nThe private details : " << endl;
		cout << "\nNAME         : " << name << endl;
		cout << "ADDRESS      : " << address << endl;
		cout << "PHONE NUMBER : " << phone << endl;
		cout << "AGE          : " << age << endl;
		cout << "BIRTHDAY     : " << date << "/" << month << "/" << year << endl; 
	}
};

class professional
{
	string company;
	int xp;
	string designation;
public:
	void getdata()
	{
		cout << "\nEnter the company you have worked in : ";
		cin >> company;
		cout << "\nEnter the years of experience you hold : " ;
		cin >> xp;
		cout << "\nEnter your designation : ";
		cin >> designation;
	}


	void display()
	{
		cout << "\nThe professional details : " << endl;
		cout << "\nCOMPANY     : " << company << endl;
		cout << "EXPERIENCE  : " << xp << endl;
		cout << "DESIGNATION : " << designation << endl;
	}
};

class academics
{
	int ssc;
	int hsc;
public:
	void getdata()
	{
		cout << "\nEnter the SSC percentage : ";
		cin >> ssc;
		cout << "\nEnter the HSC percentage : ";
		cin >> hsc;
	}

	void display()
	{
		cout << "\nThe academic details : " << endl;
		cout << "\nSSC PERCENTAGE : " << ssc << "%" << endl;
		cout << "HSC PERCENTAGE : " << hsc << "%" << endl;
	}
};

class biodata : public personal, public professional, public academics
{
public:
	personal p;
	professional P;
	academics a;

	void getdata()
	{
		p.getdata();
		P.getdata();
		a.getdata();
	}

	void display()
	{
		p.display();
		P.display();
		a.display();
	}
};

int main()
{
	biodata b;
	b.getdata();
	b.display();
	return 0;
}