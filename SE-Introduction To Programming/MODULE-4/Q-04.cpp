#include<iostream>
using namespace std;

class arr2d{
	public:
	int matrix[3][3];
	int matrix2[3][3];
	int i;
	int j;
	
	  void addmat()
	  {
	  	cout<<"\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ADDITION OF MATRIX USING CLASS \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n";
		cout<<"\n\n\t\t\t\xb2\xb2\xb2\xb2 MATRIX 1 \xb2\xb2\xb2\xb2";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<"\n\n\t\t Enter Element ["<<i<<"]["<<j<<"] : ";
				cin>>matrix[i][j];
			}
		}
		
		cout<<"\n\n\t\t\t\xb2\xb2\xb2\xb2 MATRIX 2 \xb2\xb2\xb2\xb2";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<"\n\n\t\t Enter Element ["<<i<<"]["<<j<<"] : ";
				cin>>matrix2[i][j];
			}
		}
		
		cout<<"\n\n\t\t-----------------------------------------";
		cout<<"\n\n\t\t Elements Of Matrix 1 Are :-\n\n\t\t\t";
			for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<" "<<matrix[i][j]<<"\t";
				
			}
			cout<<"\n\t\t\t";
		}
		cout<<"\n\n\t\t\t\t+";
		cout<<"\n\n\t\t Elements Of Matrix 2 Are :-\n\n\t\t\t";
			for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<" "<<matrix2[i][j]<<"\t";
				
			}
			cout<<"\n\t\t\t";
		}
		
		cout<<"\n\n\t\t=====================================\n\n\t\t\t";
			for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<" "<<matrix[i][j]+matrix[i][j]<<"\t";
				
			}
			cout<<"\n\t\t\t";
		}
	  }
		
};

    int main()
    {
    	arr2d add;
    	add.addmat();
	}


  