#include <iostream>
using namespace std;

class complex
{
private:
	int r,im;

public:

	complex()
	{
		r=0;
		im=0;
	}

	complex operator + (complex c2)
	{
		complex t;

		cout<<"Enter the complex number"<<endl;
		cin>>c2.r>>c2.im;
		cout<<"The complex number is:"<<c2.r<<"+"<<c2.im<<"i"<<endl;

		t.r=r+c2.r;
		t.im=im+c2.im;

		return t;

		/*if(t.im>=0)
			cout<<"The sum is:"<<t.r<<"+"<<t.im<<"i"<<endl;
		else
			cout<<"The sum is:"<<t.r<<t.im<<"i"<<endl;*/
	}

	void operator - (complex c2)
	{
		complex t;

		cout<<"Enter the complex number"<<endl;
		cin>>c2.r>>c2.im;
		cout<<"The complex number is:"<<c2.r<<"+"<<c2.im<<"i"<<endl;

		t.r=r-c2.r;
		t.im=im-c2.im;

		if(t.im>=0)
			cout<<"The difference is:"<<t.r<<"+"<<t.im<<"i"<<endl;
		else
			cout<<"The difference is:"<<t.r<<t.im<<"i"<<endl;
	}

	void operator * (complex c2)
	{
		complex t;

		cout<<"Enter the complex number"<<endl;
		cin>>c2.r>>c2.im;
		cout<<"The complex number is:"<<c2.r<<"+"<<c2.im<<"i"<<endl;

		t.r=r*c2.r-im*c2.im;
		t.im=im*c2.r+r*c2.im;

		if(t.im>=0)
			cout<<"The product is:"<<t.r<<"+"<<t.im<<"i"<<endl;
		else
			cout<<"The product is:"<<t.r<<t.im<<"i"<<endl;
	}

	void operator / (complex c2)
	{
		complex t;
		int d;

		cout<<"Enter the complex number"<<endl;
		cin>>c2.r>>c2.im;
		cout<<"The complex number is:"<<c2.r<<"+"<<c2.im<<"i"<<endl;

		t.r=r*c2.r+im*c2.im;
		t.im=im*c2.r-r*c2.im;
		d=c2.r*c2.r+c2.im*c2.im;

		if(t.im>=0)
			cout<<"The result is:"<<"("<<t.r<<"+"<<t.im<<"i)/"<<d<<endl;
		else
			cout<<"The result is:"<<"("<<t.r<<t.im<<"i)/"<<d<<endl;
	}

	friend void operator >> (istream &in, complex &c);
	friend void operator << (ostream &out, complex &c);
};

	void operator >> (istream &in, complex &c)
	{
		cout<<"Enter the complex number"<<endl;
		in>>c.r>>c.im;
	}

	void operator << (ostream &out, complex &c)
	{
		out << "The complex number is : "<< c.r <<" + " << c.im << " i " <<endl;
	}

int main()
{
	int c;
	complex c1,c2,c3;
	cin >> c1;
	cout << c1;
	do{
		cout<<"Enter choice:\n1)Add.\n2)Subtract.\n3)Multiply.\n4)Divide.\n5)Exit.\n";
		cin>>c;

	switch(c)
	{
	case 1:
		c3 = c1 + c2;
		cout << c3;
		break;
	case 2:
		c1-c2;
		break;
	case 3:
		c1*c2;
		break;
	case 4:
		c1/c2;
		break;
	default:
		cout<<"Wrong choice! Sorry now you are out!"<<endl;
	}
	}while(c<5);
}