#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void add(queue <int> &q)
{
	int x;
	cout << "\nEnter the number you want to push : ";
	cin >> x;
	q.push(x);
}

void remove(queue <int> &q)
{
	cout << q.front() << endl;
	q.pop();
}

void display(queue <int> &q)
{
	queue <int> qq = q;
	while(!qq.empty())
	{
		cout << qq.front() << "\t";
		qq.pop();
	}
	cout << "\n";
}

void Add(stack <int> &s)
{
	int x;
	cout << "\nEnter the number you want to push : ";
	cin >> x;
	s.push(x);
}

void Remove(stack <int> &s)
{
	cout << s.top() << endl;
	s.pop();
}

void Display(stack <int> &s)
{
	stack <int> ss = s;
	while(!ss.empty())
	{
		cout << ss.top() << "\t";
		ss.pop();
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
		queue <int> q;
		int c;
		do {
			cout << "Enter your choice :\n1)add\n2)remove\n3)display\n4)exit "<< endl;
			cin >> c;
		switch(c)
		{
			case 1:
			add(q);
			break;
			case 2:
			remove(q);
			break;
			case 3:
			display(q);
			break;
		}
	}while(c != 4);
	}
	else if (ch == 2)
	{
		stack <int> s;
		int c;
		do {
			cout << "Enter your choice :\n1)add\n2)remove\n3)display\n4)exit "<< endl;
			cin >> c;
		switch(c)
		{
			case 1:
			Add(s);
			break;
			case 2:
			Remove(s);
			break;
			case 3:
			Display(s);
			break;
		}
	}while(c != 4);
	}
	else
		cout << "\nWRONG CHOICE !" << endl;
	return 0;
}