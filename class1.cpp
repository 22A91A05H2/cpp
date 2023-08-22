#include<iostream>
using namespace std;
class Student{
	public:
		int rollno;
		string name;
	Student(int a,string n){
			rollno=a;
			name=n;
		}
	void display()
	{
		cout<<rollno<< " " <<name<<endl;
	}
		
};


int main()
{
	Student s1(1,"deepu");
	s1.display();
}
