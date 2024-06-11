#include<iostream>
using namespace std;

class point{
	public:
		
		void calculator(int a,int b)
		{
			cout<<"\n\n\t------------------------------------------------";
	        cout<<"\n\n\t\t Addition        : "<<(a+b);
	        cout<<"\n\n\t\t Subtraction     : "<<(a-b);
	        cout<<"\n\n\t\t Multiplication  : "<<(a*b);
	        cout<<"\n\n\t\t Division        : "<<(float(a/b));
	
		}
};
int main()
{
	point mat;
	int a,b;
	
	cout<<"\n\n\n\t\t\xb2\xb2\xb2\xb2\xb2 CALCULATOR \xb2\xb2\xb2\xb2\xb2";
	cout<<"\n\n\t\t Enter A   : ";
	cin>>a;
	cout<<"\n\n\t\t Enter B   : ";
	cin>>b;
	mat.calculator(a,b);
	return 0;
}