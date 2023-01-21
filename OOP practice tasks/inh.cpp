#include<iostream>
using namespace std;

class vehicle
{
	private:
		string brand;
		int price;
	public:
		vehicle()
		{
			cout<<"enter the brand of vehicle : ";
			cin>>brand;
			cout<<"enter the price of vehicle : ";
			cin>>price;
			
		}
		void get_data()
		{
			cout<<"\n\ndetails as output "<<endl;
			cout<<brand<<"    "<<price;
		
		}
};
class car : public vehicle
{
	private:
		int model;
	public:
		car()
		{
			cout<<"model of car ";
			cin>>model;
		}
		void get_car()
		{
				get_data();
			cout<<"    "<<model;
		
		}
};
int main()
{
	car c;
	c.get_car();
}
