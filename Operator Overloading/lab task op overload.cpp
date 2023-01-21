#include<iostream>
using namespace std;

class Cube{
	
	private:
		
		double length;
		double width;
		double height;
		
	public:
		
		Cube()
		{
			cout<<"\ncube's default constructor\n "<<endl;
		}
		
		Cube(double length , double width , double height)
		{
			this->length = length;
			this->width = width;
			this->height = height;
		}
		
		void display()
		{
			cout<<"\ndisplaying dimensions\n\n";
			cout<<"length : "<<length<<endl;
			cout<<"width : "<<width<<endl; 
			cout<<"height : "<<height<<endl;
		}
		
		Cube operator +(Cube & c1)
		{
			Cube out;
			out.length = length + c1.length;
			out.width = width + c1.width;
			out.height = height + c1.height;
			return out;
		}
	
		Cube operator -(Cube & c2)
		{
			Cube out;
			out.length = length - c2.length;
			out.width = width - c2.width;
			out.height = height - c2.height;
			return out;
		}
		
		Cube operator *(Cube & c3)
		{
			Cube out;
			out.length = length * c3.length;
			out.width = width * c3.width;
			out.height = height * c3.height;
			return out;
		}
		
		Cube operator /(Cube & c4)
		{
			Cube out;
			out.length = length / c4.length;
			out.width = width / c4.width;
			out.height = height / c4.height;
			return out;	
		}
		
		void operator = (Cube c5)
		{
			length = c5.length;
			width = c5.width;
			height = c5.height;
		}
		
		bool operator ==(Cube c6)
		{
			if(length == c6.length && width == c6.width && height == c6.height)
				return 1;
			else
				return 0;
		}
};

int main()
{
	Cube C1(12.5,2.6,10.8) , C2(5.2,6.8,1.6), out;
	out=C1*C2;
	out.display();
	out=C1+C2;
	out.display();
	out=C1-C2;
	out.display();
	out=C1/C2;
	out.display();
	bool b;
	b = C1 == C2;
	cout<<"\nb : "<<b;
}
		
	
