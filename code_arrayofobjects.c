#include<iostream>
using namespace std;
class data
{
	public:
		string name;
		int roll_no;
		char grade;
		void read_values()
		{
			cout<<"enter name:"<<endl;
			cin>>name;
			cout<<"enter roll_no:"<<endl;
			cin>>roll_no;
			cout<<"grade"<<endl;
			cin>>grade;
		}
		void display_values()
		{
			cout<<name<<endl;
			cout<<roll_no<<endl;
			cout<<grade<<endl;
		}
};
int main()
{
	data s[3];
	int i,n;
	cout<<"enter nu_of students"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].read_values();
	}
	for(i=0;i<n;i++)
	{
		cout<<"student"<<i+1<<endl;
		s[i].display_values();
	}
}
