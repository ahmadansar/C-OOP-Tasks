#include <iostream>
using namespace std;

class parent{
	public:
		virtual void fun()
		{
			cout<<"Parent";
		}
};

class child : public parent{
	public: 
		void fun()
		{
			cout<<"Child";
		}
};

int main()
{
	parent* c = new parent();
	c->fun();
	child t;
	t.fun();
	return 0;
}
