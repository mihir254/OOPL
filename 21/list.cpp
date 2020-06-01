#include<iostream>
#include<list>
using namespace std;

void add(list <int> &l)
{
	int x;
	cout << "\nEnter the number you want to pulh : ";
	cin >> x;
	l.push_back(x);
}

void remove(list <int> &l)
{
	cout << l.front() << endl;
	l.pop_front();
}

void display(list <int> &l)
{
	list <int> ll = l;
	while(!ll.empty())
	{
		cout << ll.front() << "\t";
		ll.pop_front();
	}
	cout << "\n";
}

void Add(list <int> &l)
{
	int x;
	cout << "\nEnter the number you want to pulh : ";
	cin >> x;
	l.push_back(x);
}

void Remove(list <int> &l)
{
	cout << l.back() << endl;
	l.pop_back();
}

void Display(list <int> &l)
{
	list <int> ll = l;
	while(!ll.empty())
	{
		cout << ll.back() << "\t";
		ll.pop_back();
	}
	cout << "\n";
}

int main()
{
	int ch;
	cout << "\nEnter the choice :\n1)QUEUE\n2)STACK\nCHOICE : ";
	cin >> ch;

	if (ch == 1)
	{
		list <int> l;
		int c;
		do {
			cout << "Enter your choice :\n1)add\n2)remove\n3)display\n4)exit "<< endl;
			cin >> c;
		switch(c)
		{
			case 1:
			add(l);
			break;
			case 2:
			remove(l);
			break;
			case 3:
			display(l);
			break;
		}
	}while(c != 4);
	}
	else if (ch == 2)
	{
		list <int> l;
		int c;
		do {
			cout << "Enter your choice :\n1)add\n2)remove\n3)display\n4)exit "<< endl;
			cin >> c;
		switch(c)
		{
			case 1:
			Add(l);
			break;
			case 2:
			Remove(l);
			break;
			case 3:
			Display(l);
			break;
		}
	}while(c != 4);
	}
	else
		cout << "\nWRONG CHOICE !" << endl;
	return 0;
}