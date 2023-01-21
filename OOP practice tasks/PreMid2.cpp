#include<iostream>
using namespace std;
int main()
{
	try
	{
	int value1;
	double value2;
	cout<<"enter an iteger type number : ";
	cin>>value1;
	cout<<"enter a double type number : ";
	cin>>value2;
//	float add = value1 + value2;
//	float mul = value1 * value2;
//	float div = value1 / value2;
//	//double mod = value1 % value2;
	if(value1<0 || value2<0 )
	{
		throw 69;
	}
	else
	{
		double add = value1 + value2;
		cout<<"your sum is : "<<add<<endl;
		double mul = value1 * value2;
		cout<<"your multiplication is : "<<mul<<endl;
		double div = value1 / value2;
		cout<<"your division is : "<<div<<endl;
		//double mod = value1 % value2;
		//cout<<"your modulus is : "<<mod<<endl;
	}
}
	catch(...)
	{
		cout<<"ERROR! Each number should be positive..."<<endl;
	}
}

