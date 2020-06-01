#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
	if (argc < 4)
	{
		cout << "INSUFFICIENT DATA" << endl;
	}

	string data, newdata;

	cout << "THE FILE BEFORE EDITING READS : " << endl;	

	fstream inf;
	inf.open(argv[1], ios::in);
	if (!inf)
	{
		cout << "ERROR" << endl;
	}
	while(inf)
	{
		getline(inf, data);
		cout << data << endl;
	}
	inf.close();

	inf.open(argv[1], ios::in);
	if (!inf)
	{
		cout << "ERROR" << endl;
	}
	newdata = "";

	while(inf)
	{
		getline(inf, data);
		int a = data.find(argv[2], 0);
		while(a != string::npos)
		{
			data.replace(a, strlen(argv[2]), argv[3]);
			a = data.find(argv[2], a+1);
		}
		newdata = newdata + data + "\n";
	}
	inf.close();

	inf.open(argv[1], ios::out);
	if (!inf)
	{
		cout << "ERROR" << endl;
	}

	inf << newdata;
	inf.close();

	inf.open(argv[1], ios::in);
	if (!inf)
	{
		cout << "ERROR" << endl;
	}
	while(inf)
	{
		getline(inf, data);
		cout << data << endl;
	}
	inf.close();


}