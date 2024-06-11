#include <iostream>
using namespace std;
class person
{
public:
	string name;
	int age;
	float per;
	double salary;
	void initialize(string sname,int sage,float res,double tsal)
	{
      name=sname;
      age=sage;
      per=res;
      salary=tsal;
	}	
};
class student:public person
{
public:
	
	void write()
	{
     cout<<"\n\n\t\t Enter Student Percentage  : ";
     cin>>per;
     cout<<"\n\n\t\t Enter Teacher's salary    : ";
     cin>>salary;
	}
	
	
};
class teacher:public student
{
public:
	 
	
	void display()
	{
cout<<"\n\n\t\t  Student  Name      Is   : "<<name;
cout<<"\n\n\t\t  Student  Age       Is   : "<<age;
cout<<"\n\n\t\t  Student Percentage Is   : "<<per;
cout<<"\n\n\t\t  Teacher's salary   Is   : "<<salary;

	}
	
};
int main()
{
string sname;
int sage;
float res;
double tsal;

teacher obj;

cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2\xb2 MULTILEVELINHERITANCE \xb2\xb2\xb2\xb2\xb2\xb2";
cout<<"\n\n\t\t Enter Student Name       : ";
cin>>sname;
cout<<"\n\n\t\t Enter Student Age         : ";
cin>>sage;
obj.initialize(sname,sage,res,tsal);
obj.write();
obj.display();


	
	return 0;
}