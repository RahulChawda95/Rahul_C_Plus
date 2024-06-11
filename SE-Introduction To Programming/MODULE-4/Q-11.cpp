#include<iostream>
using namespace std;
class bank
{
public:
	int p;
	int r;
	int t;
	int si;
	int amount;

	bank(int p,int r,int t)
	{
        si=p*r*t/100;
        amount=si+p;
         cout<<"\n\n\t\t\xb2\xb2\xb2\xb2\xb2 SIMPLE INTEREST USING CONSTRUCTOR xb2\xb2\xb2\xb2\xb2 ";
        cout<<"\n\n\t\t The Simple Interest Is  : "<<si;
        cout<<"\n\n\t\t The Amount          Is  : "<<amount;


	}
	bank(int p,int r,float t)
	{
        si=p*r*t/100;
        amount=si+p;

        cout<<"\n\n\t\t The Simple Interest Is  : "<<si;
        cout<<"\n\n\t\t The Amount          Is  : "<<amount;


	}
	
	
};
int main(int argc, char const *argv[])
{
	bank obj1(12000,12,2),obj2(2000,4,2);
	return 0;
}