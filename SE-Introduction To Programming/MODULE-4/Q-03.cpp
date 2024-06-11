#include<iostream>
using namespace std;

class arr2d{
	public:
	int matrix[3][3];
	int i;
	int j;
	
	void cover()
	{
		cout<<"\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 MATRIX USING CLASS \xb2\xb2\xb2\xb2\xb2\xb2\n";
		
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<"\n\n\t\t Enter Element ["<<i<<"]["<<j<<"] : ";
				cin>>matrix[i][j];
			}
		}
		cout<<"\n\n\t\t-----------------------------------------";
		cout<<"\n\n\t\t Elements Are :-\n\n\t\t\t";
			for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<" "<<matrix[i][j]<<"\t";
				
			}
			cout<<"\n\t\t\t";
		}
  }
};
int main()
{
	arr2d min;
	min.cover();
	
	return 0;
}