#include<iostream>
using namespace std;
class cricketer
{
public:
	string name;
	string team;
	
};
class batsman:public cricketer
{
public:
	int truns;
	int aruns;
	int bperform;
	string name;
	string tname;

	void input()
	{
		cout<<"\n\n\t\t\t \xb2\xb2\xb2\xb2 INPUT \xb2\xb2\xb2\xb2 ";
		cout<<"\n\n\t\t Enter Name             : ";
		cin>>name;
		cout<<"\n\n\t\t Enter Team             : ";
		cin>>team;
		cout<<"\n\n\t\t Enter Total Runs       : ";
		cin>>truns;
		cout<<"\n\n\t\t Enter Best Performance : ";
		cin>>bperform;
	}
	 void calavg(int matchplay)
	{
		aruns=truns/matchplay;
	}
	void display()
	{
		cout<<"\n\n\t\t\t \xb2\xb2\xb2\xb2 DISPLAY \xb2\xb2\xb2\xb2";
		cout<<"\n\n\t\t Name Is             : "<<name;
		cout<<"\n\n\t\t Team Is             : "<<team;
		cout<<"\n\n\t\t Total Runs Is       : "<<truns;
		cout<<"\n\n\t\t Avrage Runs Is      : "<<aruns;
		cout<<"\n\n\t\t Best Performance Is : "<<bperform;

	}
	
};
int main()
{
	cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2\xb2 FIIND AVRAGE RUNS USING SINGLE LINE INHERITANCE \xb2\xb2\xb2\xb2\xb2\xb2 ";
	
	batsman run;
	run.input();
	run.calavg(5);
	run.display();
	
	return 0;
}