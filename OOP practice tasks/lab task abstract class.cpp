#include <iostream>
using namespace std;

class garmet{
	private:
		char name[20];
	public:
		void set_name()
		{
			cout<<"enter your name : ";
			cin.get(name,20); 
		}
		
		virtual int clc_price()=0;
};

class upper : public garmet{
	protected:
		int collar_size;
	public:
		void set_collar()
		{
			cout<<"enter your colar size : ";
			cin>>collar_size;
		}
		virtual int get_collar_size()=0;
};

class lower : public garmet{
	protected:
		int waist;
	public:
		void set_waist()
		{
			cout<<"enter your waist : ";
			cin>>waist;
		}
		virtual int get_waist()=0;
};

class shirt : public upper{
	public:
		int get_collar()
		{
			return collar_size-1;
		}
		int clc_price()
		{
			return collar_size*20 + 10;
		}
};

class pajama : public lower{
	public:
		int get_waist()
		{
			return waist-2;
		}
		int clc_price()
		{
			return waist*15 + 50;
		}
};

class trouser : public lower{
	public:
		int get_waist()
		{
			return waist-3;
		}
		int clc_price()
		{
			return waist*20 + 100;
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
				s[i].set_collar();
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
