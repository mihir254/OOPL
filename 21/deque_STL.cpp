//============================================================================
// Name        : deque_STL.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <deque>
using namespace std;

void showdeque(deque <int> q)
{
	deque <int> :: iterator it;
	for(it = q.begin(); it != q.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << "\n";
}

int main()
{
	deque <int> p;
	p.push_back(10);
	p.push_front(20);
	p.push_back(30);
	p.push_front(40);

	cout << "The Deque looks like : " << endl;
	showdeque(p);

	cout << "The number of elements in the deque is : " << p.size() << endl;
	cout << "The first element is : " << p.front() << endl;
	cout << "The last element is : " << p.back() << endl;
	p.pop_front();
	cout << "The Deque after popping the front element looks like : " << endl;
	showdeque(p);
	p.pop_back();
	cout << "The Deque after popping the last element looks like : " << endl;
	showdeque(p);
	return 0;
}
