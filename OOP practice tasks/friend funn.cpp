#include<iostream>
using namespace std;

class student{
	private:
		string name;
		int sap;
		
		friend int data(student);
		public:
			student()
			{
				sap=2;
			}
};

int data(student s)
{
	s.sap+=5;
	return s.sap;
}
int main()
{
	student S;
	cout<<"sap is : "<<data(S);
	
}
