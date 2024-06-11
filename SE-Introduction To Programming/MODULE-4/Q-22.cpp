#include<iostream>
using namespace std;

class number{
	private:
		int num1;
		int num2;
		
	public:
		number(int n1,int n2)
		{
			num1=n1;
			num2=n2;
		}
		void display();
		friend void swap(number &n);
};
void number::display()
   { 
     cout<<"\n\n\t\t\t A = "<<num1;
     cout<<"\n\n\t\t\t B = "<<num2;
  }
  void swap(number &n)
  {
  	int temp;
  	temp=n.num1;
  	n.num1=n.num2;
  	n.num2=temp;
  }
int main()
{
	int a;
	int b;
     cout<<"\n\n\t\t\t Enter A :- ";
     cin>>a;
     cout<<"\n\n\t\t\t Enter B :- ";
     cin>>b;
	number n(a,b);
	
	cout<<"\n\n\t---------------------------Before swap :-";
	n.display();
	
	cout<<"\n\n\t---------------------------After swap :-";
	swap(n);
	n.display();
	return 0;
}