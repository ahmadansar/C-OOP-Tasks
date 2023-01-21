#include<iostream>
using namespace std;

class account{
	
	private:
		
	string acc_no;
	string acc_title;
	double amt;
	string acc_typ;
	
	public:
		
	account()
	{
		cout<<"\naccount's default constructor called\n";
	}
	
//parametrised constructor
	account(string acc_no,string acc_title,double amt,string acc_typ)
	{
		this->acc_no = acc_no;
		this->acc_title = acc_title;
		this->amt = amt;
		this->acc_typ = acc_typ;
	}
	
//copy constructor
	account(const account &obj)
	{
		this->acc_no=obj.acc_no;
		this->acc_title=obj.acc_title;
		this->acc_typ=obj.acc_typ;
		this->amt=obj.amt;
	}
	
	//functions
	void deposit(double dep_amt)
	{
		amt+=dep_amt;
		cout<<"\nyour balance after deposit : "<<amt;
	}
	void withdraw(double wdrw)
	{
		amt-=wdrw;
		cout<<"\nyour balance after withdraw : "<<amt;
	}
	void changeType(string acc_type)
	{
		acc_typ=acc_type;
		cout<<"\nyour account type : "<<acc_typ<<endl;
	}
	void checkBalance()
	{
		cout<<"\nyour total account balance is : "<<amt;
	}
	void accInfo()
	{
		cout<<"\naccount title : "<<acc_title;
		cout<<"\naccount number : "<<acc_no;
		cout<<"\naccount type : "<<acc_typ;
		cout<<"\naccount balance : "<<amt<<endl;
	}
	
//setters	
	set_accNo()
	{
		cout<<"enter your account/IBAN no  : ";
		cin>>acc_no;
	}
	set_accTtl()
	{
		cout<<"enter your account title : ";
		cin>>acc_title;
	}
	set_amnt()
	{
		cout<<"enter your amount : ";
		cin>>amt;
	}
	set_accTyp()
	{
		cout<<"enter thr type of your account : ";
		cin>>acc_typ;
	}
	
//getters
	get_accNo()
	{
		cout<<"account no : "<<acc_no;
	}	
	get_accTtl()
	{
		cout<<"account title : "<<acc_title;
	}
	get_amnt()
	{
		cout<<"your amount : "<<amt;
	}
	get_accTyp()
	{
		cout<<"your accouny type is : "<<acc_typ;
	}
	
//destructor	
	~account()
	{
		cout<<"\n\naccount's destructor called. \n";
	}
	
};

int main()
{
	account a1("abc123","ansar",50000,"saving");
	//account a1;
	//a1.set_accNo();
	a1.checkBalance();
	a1.deposit(10000);
	a1.withdraw(700);
	a1.changeType("current");
	a1.accInfo();
	account a2=a1;
	a2.deposit(5000);
	cout<<"\n\ninformation of account a1 \n";
	a1.accInfo();
	cout<<"\ninformation of account a2 \n";
	a2.accInfo();
}
