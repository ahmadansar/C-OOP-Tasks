#include <iostream>
#include <ctime>
#include <string>
using namespace std;

//parent class
class cricketer{
	
	//private attributes
	protected:
		string name;
		string dob;
		int shirt_no;
		int t20_rating;
		int odi_rating;
		int test_rating;		
		int start_year;
	
	//public attributes
	public:
		//getting current year form pc
		time_t t=time(NULL);
		tm*tPtr=localtime(&t);
		int crt_year=(tPtr->tm_year)+1900;
		
		//getting year from dob
		//int dob_year = stoi(dob);
		
		//default constructor
		cricketer()
		{
			cout<<"\ncricketer's constructor called\n";
		}
		
		//parametrised constructor
		cricketer(string name, string dob, int shirt_no, int t20_rating, int odi_rating, int test_rating,  int start_year)
		{
			this->name = name;
			this->dob = dob;
			this->shirt_no = shirt_no;
			this->t20_rating = t20_rating;
			this->odi_rating = odi_rating;
			this->test_rating = test_rating;
			this->start_year = start_year;
		}
		
		//functions
		void calculate_age()
		{
			int dob_year = stoi(dob);
			int age= crt_year - dob_year;
			cout<<"\nyour age is : "<<age;
		}
			
		void calculate_exp()
		{
			int exp= crt_year - start_year;
			cout<<"\nyour experience is : "<<exp;
		}
		
		void changeOdi_rating(int odi_rating)
		{
			this->odi_rating = odi_rating;
			cout<<"\nodi_rating after updation : "<<odi_rating;
		}
		
		void changeTest_rating(int test_rating)
		{
			this->test_rating = test_rating;
			cout<<"\ntest_rating after updation : "<<test_rating;
		}
		
		void changeT20_rating(int t20_rating)
		{
			this->t20_rating = t20_rating;
			cout<<"\nt20_rating after updation : "<<t20_rating;
		}
		
		//destructor
		~cricketer()
		{
			cout<<"\ncricketer's destructor called\n";
		}		
};

//child class inherited from parent cricketer class
class bowler:public cricketer{
	
	//private attributes
	private:
		string bowler_type;
		int total_wickets;
		int match_played;
		
	//public attributes	
	public:
		
		//default constructor
		bowler()
		{
			cout<<"\nbowler's constructor called\n";
		}
		
		//parametrised constructor & constructor called from parent cricketer class
		bowler(string name, string dob, int shirt_no, int t20_rating, int odi_rating, int test_rating,  int start_year, string bowler_type, int total_wickets, int match_played):	cricketer(name, dob, shirt_no, t20_rating, odi_rating, test_rating, start_year)
		{
			this->bowler_type = bowler_type;
			this->total_wickets = total_wickets;
			this->match_played = match_played;
		}
		
		//functions
		void clcBowl_avg()
		{
			int bowl_avg = total_wickets/match_played;
			cout<<"\nbowler's average : "<<bowl_avg;
		}
		
		void update_matches(int matches)
		{
			match_played += matches;
			cout<<"\ntotal matches after updation : "<<match_played;
		}
		
		void update_wickets(int wickets)
		{
			total_wickets += wickets;
			cout<<"\ntotal wickets after updation : "<<total_wickets;
		}
		
		//destructor
		~bowler()
		{
			cout<<"\n\nbowler's destructor called\n ";
		}
};

//child batsman class inherited from parent cricketer class
class batsman : public cricketer{
	
	//private attributes
	private:
		string bat_type;
		int total_runs;
		int match_played;
		int best_score;
		
	//public attributes
	public:
		
		//default constructor
		batsman()
		{
			cout<<"\nbatsman's constructor called\n";
		}
		
		//parametrised constructor
		batsman(string name, string dob, int shirt_no, int t20_rating, int odi_rating, int test_rating,  int start_year, string bat_type, int total_runs, int match_played, int best_score) : cricketer(name, dob, shirt_no, t20_rating, odi_rating, test_rating, start_year)
		{
			this->bat_type = bat_type;
			this->total_runs = total_runs;
			this->match_played = match_played;
			this->best_score = best_score;
		}
		
		//functions
		void clcBat_avg()
		{
			int bat_avg = total_runs/match_played;
			cout<<"\nbatting average : "<<bat_avg;
		}
		
		void update_matches(int matches)
		{
			match_played += matches;
			cout<<"\ntotal matches after updation : "<<match_played;
		}
		
		void update_runs(int runs)
		{
			total_runs += runs;
			cout<<"\ntotal runs after updation : "<<total_runs;
		}
		
		//destructor
		~batsman()
		{
			cout<<"\n\nbatsman's destructor called\n ";
		}
};

//allrounder class inherited form class batsman & bowler
class all_rounder : public batsman,bowler{
	
	//public attributes
	public:
		
	//default constructor
	all_rounder()
	{
		cout<<"\nall_rounder's construtor called\n ";
	}
	
	//destructor
	~all_rounder()
	{
		cout<<"\nall_rounder's destructor called\n";
	}
};

//main body
int main()
{
	batsman bat1("ansar","2002",10,20,50,100,2012,"righthand",500,15,102);
	bat1.calculate_exp();
	bat1.calculate_age();
	bat1.clcBat_avg();
	bat1.update_matches(10);
	bat1.update_runs(100); 
	bat1.changeT20_rating(20);
	bat1.changeOdi_rating(50);
	bat1.changeTest_rating(100);
	bowler bol1("ansar","2002",10,20,50,100,2012,"rightarmfast",20,10);
	bol1.update_wickets(10);
	bol1.update_matches(5);
	bol1.clcBowl_avg();
	bol1.calculate_exp();
	bol1.changeT20_rating(20);
	bol1.changeOdi_rating(50);
	bol1.changeTest_rating(100);
	bol1.calculate_age();
}

