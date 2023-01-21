#include <iostream>
using namespace std;
int count = 0;
class person{
	private:
		string name;
		int age;
	public:
	person(){
		cout<<"construtor created"<<endl;
		count++;
	}
	
	
	person(string name, int age){
		this -> name = name;
		this -> age= age;
		cout<<"Paramaterized constructor called"<<endl;
		count++;
	}
	
	person(person &obj){
		name = obj.name;
		age = obj.age;
		count++;
	}

    void get_values(){
    	cout<<"Name: "<<this->name<<endl;
		cout<<"Age: "<<this->age<<endl; 
	}
	
	
	~person(){
		cout<<"Destructer called"<<endl;
		count--;
		cout<<"Value of count is: "<<count<<endl;
	}
	
	
	
};

int main(){
	person p1("ali", 23);	
	person p2 = p1;
	p1.get_values();
	p2.get_values();
	
	
	
}
