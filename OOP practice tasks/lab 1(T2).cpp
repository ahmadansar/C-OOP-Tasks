#include<iostream>
using namespace std;
struct student
{
	int roll_no;
	string name;
	int age;
}s[9];
void age()
{
	cout<<"students with age 14 : "<<endl;
	for(int i=0;i<9;i++)
	{
		if(s[i].age==14)
		{
			cout<<"name of student "<<i+1<<" : "<<s[i].name;
		}
	}
}
void even_roll()
{
	cout<<"students having even roll no : "<<endl;
	for(int j=0;j<9;j++)
	{
		if(s[j].roll_no%2==0)
		{
			cout<<"name of students "<<j+1<<" : "<<s[j].name<<endl;
		}
	}
}
int main()
{
	for(int k=0;k<9;k++)
	{
		cout<<"enter name of student "<<k+1<<" : ";
		cin>>s[k].name;
		cout<<"enter age of student "<<k+1<<" : ";
		/*do
		{
			cin>>s[k].age;
		}
		while(s[k].age>=11 && s[k].age<=14);
		cout<<"enter roll no of student "<<k+1<<" : ";
		cin>>s[k].roll_no;*/
		
	}
	void age();
	void even_roll();
	return 0;
}
