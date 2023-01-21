#include <iostream>
using namespace std;

class date{
	private:
	int day;
	int month;
	int year;
	public:
		void set_date()
		{
			cout<<"enter DOB in the format of dd/mm/year \n";
			cout<<"enter day : ";
			cin>>day;
			cout<<"enter month : ";
			cin>>month;
			cout<<"enter year : ";
			cin>>year;
			cout<<endl;
		}
		void get_date()
		{
			char temp;
			cout<<"\nyour date of birth \n";
			cout<<day<<"/"<<month<<"/"<<year<<endl;
		}
};
class address{
	private:
		int h_no;
	public:
		string area;
		string city;
		
		void set_adr()
		{
			cout<<"enter your address \n";
			cout<<"enter house number : ";
			cin>>h_no;
			cout<<"area : ";
			cin>>area;
			cout<<"enter your city : ";
			cin>>city;
			cout<<endl;
		}
		void get_adr();
};
void address :: get_adr()
{
	cout<<"address of student \n";
	cout<<"house number : "<<h_no<<endl;
	cout<<"area : "<<area<<endl;
	cout<<"city : "<<city<<endl;
}
class student{
	private:
		string name ;
		int age ;
		address a1;
		date d1;
	public:
		static int a;
		student(){
			cout<<"constructor called \n";
			a++;
			cout<<a<<"\n\n";
		}
		void set_data()
		{
			cout<<"enter details of student \n";
			cout<<"enter name : ";
			getline(cin,name);
			cout<<"enter age : ";
			cin>>age;
			cout<<endl;
			a1.set_adr();
			cout<<endl;
			d1.set_date();
		}
		void get_data();
		~student(){
			cout<<"\n\ndestructor called \n";
			a--;
			cout<<a;
		}
};
int student :: a=0;
void student ::  get_data()
		{
			cout<<"info of student \n";
			cout<<"student name : "<<name<<endl;
			cout<<"student age  : "<<age<<"\n\n";
			a1.get_adr();
			d1.get_date();
		}

int main()
{
	student s1;
	s1.set_data();
	s1.get_data();
	
}
