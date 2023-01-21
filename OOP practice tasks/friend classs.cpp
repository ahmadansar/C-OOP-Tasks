#include<iostream>
using namespace std;
class girl;
class boy{
	private:
		int roll;
		friend class girl;
	public:
		boy() : roll(5) {}
};

class girl{
	private:
		int sap;
	public:
		girl() : sap(6) {}
		
		int add()
		{
			boy b;
			return b.roll + sap;
		}
};

int main()
{
	girl g;
	cout<<"sum is : "<<g.add();
}
