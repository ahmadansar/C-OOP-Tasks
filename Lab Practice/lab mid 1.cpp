#include<iostream>
using namespace std;

class iphone13{
	protected:
		int weight;
		double camera;
		double display;
	public:
		iphone13()
		{
			weight = 174; 
			camera = 12;
			display = 6.1;
			cout<<"iphone 13's default constructor "<<endl;
		}
		iphone13(int weight , double camera , double display)
		{
			this->weight = weight;
			this->camera = camera;
			this->display = display;
			cout<<"1phone 13's parametrised constructor "<<endl;
		}
		~iphone13()
		{
			cout<<"iphone 13's destructor "<<endl;
		}
		
};

class iphone13pro:public iphone13{
	public:
		iphone13pro()
		{
			weight = 204;
			camera = 12;
			display = 6.1;
			cout<<"iphone 13 pro's default constructor "<<endl;
		}
		iphone13pro(int weight , double camera , double display)
		{
			this->weight = weight;
			this->camera = camera;
			this->display = display;
			cout<<"1phone 13 pro's parametrised constructor "<<endl;
		}
		~iphone13pro()
		{
			cout<<"iphone 13 pro's destructor "<<endl;
		}
	
};

class iphone13promax: public iphone13{
	public:
		iphone13promax()
		{
			weight=240;
			camera = 12; 
			display= 6.7;
			cout<<"iphone 13 pro max's default constructor "<<endl;
		}
		iphone13promax(int weight , double camera , double display)
		{
			this->weight = weight;
			this->camera = camera;
			this->display = display;
			cout<<"1phone 13 pro max's parametrised constructor "<<endl;
		}
		~iphone13promax()
		{
			cout<<"iphone 13 pro max's destructor "<<endl;
		}
};

int main()
{
	iphone13pro pro;
	iphone13pro(204,12,6.1);
	iphone13promax max;
	iphone13promax(250,15,7.3);
}
