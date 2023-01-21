//inheritance
#include<iostream>
using namespace std;

class vehicle
{
	private:
		string brand;
		int price;
	public:
		void set_v()
		{
			cout<<"enter the brand of vehicle : ";
			cin>>brand;
			cout<<"enter the price of vehicle : ";
			cin>>price;
			
		}
		void get_v()
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
		void set_c()
		{
			set_v();
			cout<<"model of car ";
			cin>>model;
			
		}
		void get_c()
		{
			get_v();
			cout<<"    "<<model;
		}
};
class truck : public car
{
	private:
		int tyre;
	public:
		void set_t()
		{
			set_c();
			cout<<"enter number of tyres : ";
			cin>>tyre;
		
		}
		void get_t()
		{
			get_c();
			cout<<"    "<<tyre;
		}
};

int main()
{

	truck t;
	t.set_t();
	t.get_t();
	return 0;
}
