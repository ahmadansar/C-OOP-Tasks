#include<iostream>

using namespace std;
enum week{
	monday,tuesday,wednesday,thursday,friday,saturday,sunday
};
enum etype {laborer, secretary, manager, accountant, executive, researcher};	

class dates {	
	private:
		int day, month, year;
	public:

		void setDate(){
            char temp;
	        cout << "Enter employee date of joining in (DD/MM/YYYY) format: ";
	        cin >> day >> temp >> month >> temp >>year;
        }	
        void getDate(){
            cout << "Employee date of joining: " << day << "/" << month << "/" <<year;
        }
        int getday()
        {
        	return this->day;
		}
};
class address{
	int h_no;
	string area;
	
	public:
		string city;
	void setAdr()
	{
		cout<<"address of employee"<<endl;
		cout<<"house no : ";
		cin>>h_no;
		cout<<"area : ";
		cin>>area;
		cout<<"city : ";
		cin>>city;
	}
	void getAdr()
	{
		cout<<"\nemployee's addrress "<<endl<<"house number : "<<h_no<<endl<<"area : "<<area<<endl<<"city : "<<city;
	}
};

class employee {
	private:
		string emp_name;
        float emp_comp;
        dates date1;
        etype emp;
        week emp1;

	public:
		address ad;
		int allowence;
		void setData();
        void getData();
};

void employee::setData(){
    char type;
    char week;
    cout << "\nEnter employee Name: ";
	cin >> emp_name;
	cout << "Enter employee Compensation: ";
	cin >> emp_comp;
    date1.setDate();
    cout << "Enter employee type (first letter only laborer, secretary, manager, accountant, executive, researcher): ";
    cin >> type;
    switch (type){
        case 'l': emp = laborer; break;
        case 's': emp = secretary; break;
        case 'm': emp = manager; break;
        case 'a': emp = accountant; break;
        case 'e': emp = executive; break;
        case 'r': emp = researcher; break;
        default:
            break;
    }
    cout<<"enter day of joining : ";
    cin>>week;
    switch(week)
    {
    	case 'm': emp1 = monday;
    	case 't': emp1 = tuesday;
    	case 'w': emp1 = wednesday;
    	case 'T': emp1 = thursday;
    	case 'f': emp1 = friday;
    }
    	if (ad.city=="lahore")
	{
		allowence=0;
	}
	else
	{
		allowence=500;
	}
    ad.setAdr();
    
}

void employee::getData(){
    cout << "\nEmployee Name: " << emp_name << endl;
	cout << "Employee Compensation: $" << emp_comp <<endl;
    date1.getDate();
    cout << endl;
    switch(emp){
        case laborer:
            cout << "Employee type is laborer";
            break;
        case secretary:
            cout << "Employee type is secretary";
            break;
        case manager:
            cout << "Employee type is manager";
            break;
        case accountant:
            cout << "Employee type is accountant";
            break;
        case executive:
            cout << "Employee type is executive";
            break;
        case researcher:
            cout << "Employee type is researcher";
            break;
        default:
            cout << "Invalid input";
            break;
    }
    cout << endl;
    switch(emp1)
    {
    	case monday:
    		cout<<"joining day is monday";
    		break;
    	case tuesday:
    		cout<<"joining day is tuesday";
    		break;
    	case wednesday:
    		cout<<"joining day is wednesday";
    		break;
    	case thursday:
    		cout<<"joining day is thursday";
    		break;
    	case friday:
    		cout<<"joining day is friday";
    		break;
    	default:
    		cout<<"you entered invalid input";
    		break;
	}
cout<<"\nyour allowence : "<<allowence;
	
	ad.getAdr();
}

int main(){
    employee empp[2];
    {
    	for(int i=0;i<2;i++)
    	{
    		cout <<"\nEnter details of employee "<<i+1<<" : \n";
    	empp[i].setData();
		}
	}
	for(int k=0;k<25;k++)
	{
		cout<<"-";
	}
	for(int j=0;j<2;j++)
	{
		cout <<"\n\ndeatils of employee "<<j+1<<" : \n";
		empp[j].getData();
	}
    
	return 0;
}
