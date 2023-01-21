#include <iostream>
using namespace std;

class person{
	private:
		string name;
		 int age;
	public:
		person(string name, int age){
			this->name=name;
			this->age=age;
		}
		
		void get_data(){
			cout<<"Name of student is: "<<name<<endl;
			cout<<"Age of student is: "<<age<<endl;
			
		}
};

class student:private person{
	private:
		int roll_no;
		
	public:
		student(string name, int age, int roll_no):person(name, age){
			get_data();
			this->roll_no = roll_no;
			cout<<"Roll no of student is: "<<roll_no;
		}
};
int main(){
	student s1("temp", 20, 42916);
}
