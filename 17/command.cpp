#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
	string data, newdata;
	if (argc < 4)
	{
		cout << "INSUFFICIENT NUMBER OF ARGUEMENTS !" << endl;
		exit(1);
	}

	cout << "The word " << argv[2] << " will be replaced with " << argv[3] << " from the file " << argv[1] << "\n" << endl;
	fstream inf;
	inf.open(argv[1], ios::in);
	if (!inf)
	{
		cout << "ERROR OPENENING THE FILE!" << endl;
		return 1;
	}
	while(inf)
	{
		getline(inf, data);
		cout << data << endl;
	}
	inf.close();

	inf.open(argv[1], ios::in);
	newdata = "";
	if (!inf)
	{
		cout << "ERROR OPENENING THE FILE!" << endl;
		exit(1);
	}
	while(inf)
	{
		getline(inf, data);
		int b;
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
		cout << "ERROR OPENENING THE FILE!" << endl;
		return 1;
	}
	inf << newdata;

	cout << "The word has been replaced !" << endl;

	inf.close();

	inf.open(argv[1], ios::in);
	if (!inf)
	{
		cout << "ERROR OPENENING THE FILE!" << endl;
		return 1;
	}
	while(inf)
	{
		getline(inf, data);
		cout << data << endl;
	}
	inf.close();
	return 0;
}