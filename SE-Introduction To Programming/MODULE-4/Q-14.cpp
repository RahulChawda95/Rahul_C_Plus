#include<iostream>
using namespace std;
class calculater{
	public:
	inline int multi(int x,int y)
	{
		return x*y;
	}
	inline int cube(int z)
	{
		return z*z*z;
	}
	
};
int main()
{
	int x;
	int y;
	int z;

	cout<<"\n\n\t\t Enter x : ";
	cin>>x;
	cout<<"\n\n\t\t Enter Y : ";
	cin>>y;
	calculater obj;
	cout<<"\n\n\t\t Multiplication of Number Is  : "<<obj.multi(x,y);
	cout<<"\n\n\t\t Enter n : ";
	cin>>z;
	cout<<"\n\n\t\t cube of Number           Is  : "<<obj.cube(z);

	
	return 0;
}