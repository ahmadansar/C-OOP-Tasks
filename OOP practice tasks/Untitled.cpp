#include<iostream>
using namespace std;

class shape{
	

		
	public:
		
		int length;
		int area;
	
		set_data()
		{
			cout<<"enter length of shape : ";
		}
		void draw()
		{
			cout<<"parent class/n";
		}
};
class square : public shape{
	
	public:
	
		set_sq()
		{
			cout<<"enter length of shape : ";
			cin>>length;
		}
		void draw()
		{			
			area=length*length;
			cout<<"area of square is : "<<area;
		}
		
};
class triangle : public shape{
	
	public:
		
		set_tri()
		{
			cout<<"enter length of shape : ";
			cin>>length;
		}
		void draw()
		{
			area=length*length*length;
			cout<<"area of triangle is : "<<area;
		}
};
int main()
{
	square s1;
	s1.area;

	
}
