#include<iostream>
using namespace std;
class addString{
	public:
		string name,add;
		void input()
		{
			cout<<"\nEnter Name : ";
			getline(cin,name);
		}
		string display()
		{
			return name;
		}
		addString operator + (addString a)
		{
			add = name + a.name;
			cout<<"\n\nConcatenate String : "<<add;
			return a;
		}
};
int main()
{
	string a,b;
	addString s1,s2,s3;
	s1.input();
	s2.input();
	a=s1.display();
	b=s2.display();
	cout<<"\nString 1 : "<<a;
	cout<<"\nString 2 : "<<b;
	s3 = s1 + s2;
	return 0;
}