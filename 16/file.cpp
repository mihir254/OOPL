#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string data, line;
	
	ofstream outf;
	
	outf.open("new.txt");
	
	if (outf.is_open())
	{
		cout << "Write in the file : " << endl;
		getline(cin, data);
		outf << data;
		outf.close();
	}
	
	else
	{
		cout << "ERROR" << endl;
	}

	ifstream inf;
	
	inf.open("new.txt");

	if (inf.is_open())
	{
		while(inf)
		{
			getline(inf, line);
			cout << "\nThe contents of the file are : " << endl;
			cout << line << endl;
		}
		inf.close();
	}

	else
	{
		cout << "ERROR" << endl;
	}
}