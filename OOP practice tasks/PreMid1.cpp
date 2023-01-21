

#include<iostream>
using namespace std;

class Shape{
	public:
		virtual void calculateArea()=0;
		void printArea()
		{
			cout<<"print area of shape "<<endl;
		}
};

class TwoDim : public Shape{
	public:
		virtual void calculateTwoDimArea()=0;
};

class ThreeDim : public Shape{
	public:
		virtual void calculateThreeDimArea()=0;
};

class Circle : public TwoDim{
	public:
		void printArea()
		{
			cout<<"print area of circle "<<endl;
		}
		void calculateTwoDimArea()
		{
			cout<<"calculate two dim area of circle "<<endl;
		}
};

class Triangle : public TwoDim{
	public:
		void printArea()
		{
			cout<<"print area of triangle"<<endl;
		}
		void calculateTwoDimArea()
		{
			cout<<"calculate two dim area of triangle "<<endl;
		}
};

class Rectangle : public TwoDim{
	public:
		void printArea()
		{
			cout<<"print area of Rectangle "<<endl;
		}
		void calculateTwoDimArea()
		{
			cout<<"calculate two dim area of rectangle "<<endl;
		}
};

class Cube : public ThreeDim{
	public:
		void printArea()
		{
			cout<<"print area of cube "<<endl;
		}
		void calculateThreeDimArea()
		{
			cout<<"calculate three dim area of cube "<<endl;
		}
};

class Cone : public ThreeDim{
	public:
		void printArea()
		{
			cout<<"print area of cone "<<endl;
		}
			void calculateThreeDimArea()
		{
			cout<<"calculate three dim area of cone "<<endl;
		}
};

int main()
{
//
Shape* obj1 = new Shape();

TwoDim* obj2 = new TwoDim();
ThreeDim* obj3 = new ThreeDim();
TwoDim* obj4 = new Circle();
TwoDim* obj5 = new Triangle();
Circle* obj6 = new Circle();
Rectangle* obj7 = new Rectangle();
Cube* obj8 = new Cube();
Cone* obj9 = new Cone();
obj7->printArea();
obj8->printArea();
obj9->printArea();
obj8->calculateThreeDimArea();
obj6->calculateTwoDimArea();
}
