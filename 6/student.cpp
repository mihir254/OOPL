#include<iostream>
using namespace std;

class student
{
private:
	int rno;
	string name;
	char div;
public:
	student(int r = 0, string n = "NONAME", char d = 'D')
	{
		rno = r;
		name = n;
		div = d;
	}

	void getdata()
	{
		cout << "\nEnter the name of the student : ";
		cin >> name;
		cout << "\nEnetr the roll number : ";
		cin >> rno;
		cout << "\nEnter the div : ";
		cin >> div;  
	}

	void display()
	{
		cout << "\nThe student entry is : " << endl;
		cout << "\nName : " << this->name << endl;
		cout << "Roll Number : " << this->rno << endl;
		cout << "Division : " << this->div << endl;
	}

	~student()
	{
		cout << "destructor is called" << endl;
	}
};

class exam
{
private:
	int marks;
	string code;
	string subject;
public:

	exam(int m = 0, string c = "NOCODE", string s = "NOSUJECT")
	{
		marks = m;
		code = c;
		subject = s;
	}

	void getdata()
	{
		cout << "\nEnter the subject : ";
		cin >> subject;
		cout << "\nEnter the subject code : ";
		cin >> code;
		cout << "\nEnter the marks scored : ";
		cin >> marks;
	}

	void display()
	{
		cout << "\nThe exam details are : " << endl;
		cout << "\nSubject : " << this->subject << endl;
		cout << "Subject code : " << this->code << endl;
		cout << "Marks scored : " << this->marks << endl;
	}

	~exam()
	{
		cout << "destructor is called" << endl;
	} 
};

int main()
{
	student *s;
	exam *e;
	int n;

	cout << "Enter the number of students : " << endl;
	cin >> n;

	//ARRAY OF OBJECTS USING NEW KEYWORD

	student *s1 = new student[n];
	exam *e1 = new exam[n];

	for (int i = 0; i < n; ++i)
	{
		s1[i].getdata();	
		e1[i].getdata();
	}
	for (int i = 0; i < n; ++i)
	{
		s1[i].display();
		e1[i].display();
	}

	//COPY CONSTRUCTOR

	student P(1, "MIHIR", 'S');
	student P1;
	P1 = P;
	P1.display();

	return 0;
}