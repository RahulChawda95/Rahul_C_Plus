#include<iostream>
using namespace std;

class maths{
	public:
		int a;
		int b;
		maths(int a,int b)
		{
			cout<<"\n\n\t\t\xb2\xb2\xb2\xb2\xb2 +-*/ USING CONSTRUCTOR \xb2\xb2\xb2\xb2\xb2";
			cout<<"\n\n\t\t addition       : "<<(a+b);
			cout<<"\n\n\t\t subtraction    : "<<(a-b);
			cout<<"\n\n\t\t multiplication : "<<(a*b);
			cout<<"\n\n\t\t division       : "<<(float)(a/b);
			

		}
	
};
int main()
{
	maths obj(100,20);
	
	return 0;
}