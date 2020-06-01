#include<iostream>
#include<deque>

using namespace std;

void addFront(deque <int> &dq)
{
	int x;
	cout << "Enter the number you want to push from front : ";
	cin >> x;
	dq.push_front(x);
}

void addRear(deque <int> &dq)
{
	int x;
	cout << "Enter the number you want to push from back : ";
	cin >> x;
	dq.push_back(x);
}

void removeFront(deque <int> &dq)
{
	cout << dq.front() << endl;
	dq.pop_front();
}

void removeRear(deque <int> &dq)
{
	cout << dq.back() << endl;
	dq.pop_back();
}

void display(deque <int> &dq)
{
	deque <int> dqq = dq;
	while(!dqq.empty())
	{
		cout << dqq.front() << "\t";
		dqq.pop_front();
	}
}

void Display(deque <int> &dq)
{
	deque<int>::iterator it = dq.begin();
	while(it != dq.end())
		cout << *it << " ";
	cout << "\n";
}

int main()
{
	deque <int> dq;
	int ch;

	do
	{
		cout << "\nEnter the choice :\n1)ADD FRONT\n2)ADD REAR\n3)REMOVE FRONT\n4)REMOVE REAR\n5)DISPLAY\n6)EXIT" << endl;
		cin >> ch;

		switch(ch)
		{
			case 1:
			addFront(dq);
			break;
			case 2:
			addRear(dq);
			break;
			case 3:
			removeFront(dq);
			break;
			case 4:
			removeRear(dq);
			break;
			case 5:
			display(dq);
			break;
		}
	} while (ch != 6);
	return 0;
}