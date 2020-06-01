#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

class personal
{
	string name;
	string address;
	string phone;
	int date;
	int month;
	int year;
public:

	int age;

	void getdata()
	{
		cin.ignore();
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

class product
{
	string item_name;
	int item_price;
	int item_quantity;
public:
	int item_code;

	void getdata()
	{
		cin.ignore();
		cout << "\nEnter the item name : ";
		getline(cin, item_name);
		cout << "\nEnter the item code : ";
		cin >> item_code;
		cout << "\nEnter the item price : ";
		cin >> item_price;
		cout << "\nEnter the quantity : ";
		cin >> item_quantity;	
	}

	void display()
	{
		cout << "\n\nThe item details : " << endl;
		cout << "\nNAME     : " << item_name << endl;
		cout << "CODE     : " << item_code << endl;
		cout << "PRICE    : " << item_price << endl;
		cout << "QUANTITY : " << item_quantity << endl;
	}
};
int main()
{
	int n;
	int a[10],b[10];
	cout << "\nEnter the number of people : ";
	cin >> n;
	personal p[n];
	product P[n];
	for (int i = 0; i < n; ++i) 
	{
		p[i].getdata();
		P[i].getdata();
		a[i] = p[i].age;
		b[i] = P[i].item_code;
	}
	for (int i = 0; i < n; ++i)
	{
		p[i].display();
		P[i].display();
	}
	sort(a, a+n);
	sort(b, b+n);

	cout << "Sorted according to AGE: " << endl;

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << "\t";
	}
	cout << endl;

	cout << "\nSorted according to ITEM CODE : " << endl;

	for (int i = 0; i < n; ++i)
	{
		cout << b[i] << "\t";
	}
	cout << endl;

	int x;

	cout << "Enter the age you want to search : " << endl;
	cin >> x;

	int m = (int) binary_search(a, a+n, x);
	cout << "FOUND AT " << m+1 << endl;

	int y;

	cout << "Enter the item code you want to search : " << endl;
	cin >> y;
	
	int o = (int) binary_search(b, b+n, y);
	cout << "FOUND AT " << o+1 << endl;
	return 0;
}