#include <iostream>
using namespace std;
// this keyword is a pointer that points to the object.
// this keyword is part of every object of the class
// this keyword is used to access all the data memeber either private
// or public and all the member functions either private or public.
// Arrow symbol is used with this keyword to access 
// data member or member function of the object
// If pointer is pointing to the object of a class or structrue 
// we will use arrow operator(->) to access the members of the class
// or structure pointed by that pointer.

// Leet code medium level +10 marks

class person{
	private:
		int age;
		
	public:
		void set_data(int age){
			this->age = age;
			cout<<this->age;
		}
};

int main(){
	person p1;
	p1.set_data(2);
}
