#include<iostream>
using namespace std;
struct date
{
	int day,month,year;
}d[2];
int main()
{
	for(int i=0;i<2;i++)
	{
		cout<<"enter day "<<i+1<<" :";
		cin>>d[i].day;
		cout<<"enter month "<<i+1<<" :";
		cin>>d[i].month;
		cout<<"enter year "<<i+1<<" :";
		cin>>d[i].year;
	}
	if(d[0].day==d[1].day && d[0].month==d[1].month && d[0].year==d[1].year)
	cout<<"dates are equal ";
	else
	cout<<"dates are not equal";
}
