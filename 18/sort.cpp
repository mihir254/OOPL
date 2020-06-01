#include<iostream>
using namespace std;

template <class T>
class sort
{
	int n;
	T a[10];

public:

	void getdata()
	{
		cout << "\nEnter the number of elements you want to sort : ";
		cin >> n;

		for (int i = 0; i < n; ++i)
		 {
		 	cin >> a[i];
		 } 
	}

	void swap(T arr[],int n, int m)
	{
		T temp;
		temp = arr[n];
		arr[n] = arr[m];
		arr[m] = temp;
	}
	
	void selection()
	{
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
			swap(a,i,min);
		}
		
		cout << "The numbers after sorting are : " << endl;
		
		for (int i = 0; i < n; ++i)
		{
			cout << a[i] << "\t";
		}
		cout << "\n";
	}
};

int main()
{
	int ch;
	cout << "\nEnter the type of elements :\n1] INTEGEER\n2] FLOAT\n3] CHOICE : ";
	cin >> ch;
	if (ch == 1)
	{
		sort <int> s1;
		s1.getdata();
		s1.selection();
	}
	else if (ch == 2)
	{
		sort <float> s2;
		s2.getdata();
		s2.selection();
	}
	else
		cout << "\nWRONG CHOICE!" << endl;
	return 0;
}