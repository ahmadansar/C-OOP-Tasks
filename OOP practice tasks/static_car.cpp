#include <iostream>
using namespace std;

class car{
	public:
	static int a; 
	
	 car(){
	 	cout<<"value of a is: "<<a<<endl;
	 	a++;
	 }
};

int car::a = 0;
int main(){
	car c[5];
}
