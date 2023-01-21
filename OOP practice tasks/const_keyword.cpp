
// C++ program to calculate the area of a wall

#include <iostream>
using namespace std;

// declare a class
class Wall {
  private:
    double length;
    double height;

  public:
  	int static a;
    // parameterized constructor to initialize variables
    Wall(double len, double hgt) {
      length = len;
      height = hgt;
      cout<<"const p called : ";
      a++;
      cout<<a<<endl;
    }
    
    Wall(){
    	length = height = 0;
    	/*cout<<"const d called ";
    	a++;
    	cout<<a<<endl;*/
	}
	Wall(Wall &obj)
	{
		length=obj.length;
		height=obj.height;
		cout<<"const c called : ";
		a++;
		cout<<a<<endl;
	}

	~Wall()
	{
		cout<<"\ndest called : ";
		a--;
		cout<<a;
	}
    double calculateArea() {
      return length * height;
    }
};
int Wall :: a=0;

int main() {
  // create object and initialize data members
  Wall wall2(8.5, 6.3);
  Wall wall1=wall2;
  //Wall wall2(8.5, 6.3);

  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}

