#include<iostream>
using namespace std;
class employee
{
	public:
		int basic;
		float DA=0.52,IT=0.3,netsalary;
		void read_values()
		{
			cout<<"enter basic"<<endl;
			cin>>basic;
		}
		void display_values()
		{
			cout<<basic+DA-IT<<endl;
		}
};
int main()
{
	employee e[10];
	int i,n;
	cout<<"enter no_of employee"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		e[i].read_values();
	}
	cout<<"employee"<<i+1<<endl;
	for(i=0;i<n;i++)
	{
		e[i].display_values();
	}
}
