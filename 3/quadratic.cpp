#include<iostream>
using namespace std;

class quad
{
	int a,b,c;
public:
	quad()
	{
		a = 0;
		b = 0;
		c = 0;
	}
	friend ostream & operator << (ostream &out, quad &q1);
	friend istream & operator >> (istream &in, quad &q1);

	void operator + (quad q1)
	{
		quad t;
		t.a = a + q1.a;
		t.b = b + q1.b;
		t.c = c + q1.c;
		cout << "The sum of the two polynomials is : " << endl;
		cout << t.a << "x^2 + " << t.b << "x + " << t.c << endl;
	}

	void eval()
	{
		int x;
		cout << "Enter the value at which you want to evaluate the quadratic equations : " << endl;
		cin >> x;
		int total = 0;
		total = (a*x*x) + (b*x) + c;
		cout << "The value of the quadratic equation at the given value is : " << total << endl;
	}

	void val()
	{
		int r1,r2,sqrt;

		sqrt = ((b*b)-(4*a*c))^(1/2);

		r1 = (-b+sqrt)/(2*a);
		r2 = (-b-sqrt)/(2*a);

		cout<<"The roots are: "<<r1<<" , "<<r2<<endl;
	}
};

ostream & operator << (ostream &out, quad &q)
{
	out << "The quadratic equation looks like : ";
	out << q.a << "x^2 + " << q.b << "x + " << q.c << endl;
	return out;
}

istream & operator >> (istream &in, quad &q)
{
	cout << "Enter the coefficients of degree 2,1,0 respectively : " << endl;
	in >> q.a >> q.b >> q.c;
	return in;
}

int main()
{
	quad q, q1;
	cin >> q;
	cout << q;
	cin >> q1;
	cout << q1;
	q + q1;
	q.eval();
	q.val();
	return 0;
}