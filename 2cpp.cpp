#include<iostream>
using namespace std;
struct student
{
	int roll_no;
	char name[20];
	public:
	void get()
	{
		cout<<"Enter roll no. and name:"<<endl;
		cin>>roll_no>>name;
		
	}
	void show()
	{
		cout<<"ROll No is:"<<roll_no<<endl;
		cout<<"Name is:"<<name;
	}
};
int main()
{
	student s1;
	s1.get();
	s1.show();
	
}
