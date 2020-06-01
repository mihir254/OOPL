#include<iostream>
using namespace std;

template <class T>
void selection(T a[], int n)
{
	T temp;
	cout << "We use selection sort to sort the given numbers" << endl;
	
	for (int i = 0; i < n-1; ++i)
	{
		int min = i;

		for (int j = i+1; j < n; ++j)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	
	cout << "The numbers after sorting are : " << endl;
	
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << "\t";
	}
	cout << "\n";
}

int main()
{
	int ch, n;
	cout << "\nEnter the type of elements :\n1] INTEGEER\n2] FLOAT\n3] CHOICE : ";
	cin >> ch;
	
	if (ch == 1)
	{
		int a[10];
		cout << "\nEnter the number of elements you want to sort : ";
		cin >> n;

		for (int i = 0; i < n; ++i)
		 {
		 	cin >> a[i];
		 }

		selection(a, n);
	}
	else if (ch == 2)
	{
		float a[10];
		cout << "\nEnter the number of elements you want to sort : ";
		cin >> n;

		for (int i = 0; i < n; ++i)
		 {
		 	cin >> a[i];
		 }

		selection(a, n);
	}
	else
		cout << "\nWRONG CHOICE!" << endl;
	return 0;
}