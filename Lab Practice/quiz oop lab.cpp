#include<iostream>
using namespace std;

int count=1;
int a=1;
class thing{
	private:
		int serial_no;
	public:
	
		thing(int s_no)
		{
			int serial_no = s_no;
			cout<<a<<" object has been created "<<endl;
			count++;
		}
		void get_report()
		{
			cout<<"serial no of obj "<<count<<": "<<serial_no<<endl;
			cout<<"i am object "<<count<<endl;
		}
	
}; 
int main()
{
	thing t1(123);
	t1.get_report();
	thing t2(165);
	t2.get_report();
	thing t3(245);
	t3.get_report();
}
