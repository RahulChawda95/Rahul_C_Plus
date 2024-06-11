#include<iostream>
using namespace std;
class book{
	public:
	string a_name;
	string t_name;
	float price;
	string publish;
	
	void assign(string aname,string tname,float amt,string pname)
	{
		a_name=aname;
		t_name=tname;
		price=amt;
		publish=pname;
	}
	void display()
	{
			cout<<"\n\n\t\t\xb2\xb2\xb2\xb2 DISPLAY \xb2\xb2\xb2\xb2";
	        cout<<"\n\n\t\t Author Name  is  : "<<a_name;
	        cout<<"\n\n\t\t Tittle Name  is  : "<<t_name;
	        cout<<"\n\n\t\t Price        is  : "<<price;
	        cout<<"\n\n\t\t Author Name  is  : "<<a_name;
	        cout<<"\n\n\t\t Publisher Name Is:"<<publish;
	}
	
};
int main()
{
	string aname;
	string tname;
	float amt;
	string pname;
	cout<<"\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2 BOOK DETAILS \xb2\xb2\xb2\xb2\xb2\xb2";
	cout<<"\n\n\t\t Enter Author Name       : ";
	cin>>aname;
	cout<<"\n\n\t\t Enter Tittle Name       : ";
	cin>>tname;
	cout<<"\n\n\t\t Enter Book Price        : ";
	cin>>amt;
	cout<<"\n\n\t\t Enter Publisher Name    : ";
	cin>>pname;
	book obj;
	obj.assign(aname,tname,amt,pname);
	obj.display();
	
	return 0;
}