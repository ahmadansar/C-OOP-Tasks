#include <iostream>
using namespace std;

class garment{
	protected:
		char name[20];
	public:
	void set_name(){
		cout<<"Enter Name: ";
		cin.get(name,20);
	}
		//void get_name();
		virtual int clc_price()=0;
		
};

class upper : public garment{
	protected:
		int collar_size;
	public:
	void set_collar_size(){
		cout<<"Enter collar size: ";
		cin>>collar_size;
	}
		virtual int get_collar_size()=0;
		
};

class lower: public garment{
	protected:
	int waist;
	public:
	void set_waist(){
		cout<<"Enter waist: ";
		cin>>waist;
	}
		virtual int get_waist()=0;
		
		
};

class shirt : public upper{
	public:
		int clc_price(){
			return collar_size*20+10;
		}
		int get_collar_size(){
			return collar_size-1;
		}	
};

class pajama: public lower{
	public:
		
		int clc_price(){
			return waist*15+50;
		}
		int get_waist(){
			return waist-2;
		}
};

class trouser: public lower{
	public:
		int clc_price(){
			return waist*20+100;
		}
		int get_waist(){
			return waist-3;
		}
};

int main(){
shirt s[10];
pajama p[10];
trouser t[10];
for(int i=0;i<=9;i++){
	cout<<"Enter for shirt(s), trouser(t), pajama(p)\n";
	char ch;
	cin>>ch;
	if(ch=='s'){
		s[i].set_collar_size();
		cout<<"Price: "<<s[i].clc_price()<<endl;
	}
	else if(ch=='p'){
		p[i].set_waist();
		cout<<"Price: "<<p[i].clc_price()<<endl;
		
		
	}
	else if(ch=='t'){
		t[i].set_waist();
		cout<<"Price: "<<t[i].clc_price()<<endl;
	}
	else{
		cout<<"You have enter the wrong item\n";
		i--;
	}	
	}	
}
