#include<fstream>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc < 4)
	{
		cout << "INSUFFICIENT ARGUEMENTS!" << endl;
	}

	string data, newdata;

	fstream inf;

	cout << "THE FILE BEFORE EDITING LOOKS LIKE : " << endl;

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

	cout << "NOW WE WILL REPLACE THE WORD " <<  argv[2] << " WITH THE WORD " << argv[3] << endl;

	inf.open(argv[1], ios::in);

	if (!inf)
	{
		cout << "ERROR" << endl;
	}

	newdata = "";

	while(inf)
	{
		getline(inf, data);
		int a = (int) data.find(argv[2], 0);
		while(a != string::npos)
		{
			data.replace(a, strlen(argv[2]), argv[3]);
			a = (int) data.find(argv[2], a+1);
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

	cout << "THE FILE AFTER THE REPLACEMENT READS : \n" << endl;

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
	return 0;
}