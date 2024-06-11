#include<iostream>
using namespace std;

class table{
	public:
		void show()
		{
			cout<<"\n\n\t\tROLLNO\tSUB1\tSUB2\tSUB3\tTOTAL\tPERCENTAGE";
		    cout<<"\n\n\t\t 1\t30\t25\t45\t100\t33.33";
		    cout<<"\n\n\t\t 2\t25\t20\t25\t70\t23.33";
		    cout<<"\n\n\t\t 3\t20\t15\t35\t70\t23.33";
		    cout<<"\n\n\t\t 4\t35\t30\t40\t105\t35.00";
		}
	
	
	
};
int main()
{
	table obj;
	obj.show();
	
	
	return 0;
}