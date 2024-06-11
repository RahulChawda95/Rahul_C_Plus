#include<iostream>
using namespace std;

class fibo{
	public:
	int n;
	int i;
	int a;
	int b;
	int c;
	int x;
		int fact;
	
	void a1()
	{
	cout<<"\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2 FIBONACI SERIES \xb2\xb2\xb2\xb2\xb2";
	cout<<"\n\n\t\t Enter Number to Print Fibonaci Series : ";
	cin>>n;
	     a=0,b=1;
	     	cout<<"\n\n\t\t Series Is : \t\t";
	     for(i=1;i<=n;i++)
	     {
	     	cout<<"\n\n\t\t\t\t";
	     	c=a+b;
	     	a=b;
	     	b=c;
	     
	     	cout<<a;
	     	
		 }
	}
	
		void a2()
	 {
	 	cout<<"\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2 FACTORIAL \xb2\xb2\xb2\xb2\xb2";
	 	cout<<"\n\n\t\t Enter Number to Print Factorial  : ";
	      cin>>n;
	      fact=1;
	      for(x=1;x<=n;x++)
	      {
	      	fact=fact*x;
	    
		  }
		  cout<<"\n\n\t\t Factorial Is : "<<fact;
	 }
};

int main()
{
	fibo obj;
	obj.a1();
	obj.a2();

	return 0;
}