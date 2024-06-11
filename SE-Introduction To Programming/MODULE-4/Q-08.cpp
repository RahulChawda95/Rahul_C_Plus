#include<iostream>
using namespace std;

class lecDetails
{
	public:
		string f_lecturer[20],f_subject[20],f_course[20];
		int f_lectures[20],i;
		
		void input()
		{
			cout<<"\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 LACTURE DETAILS \xb2\xb2\xb2\xb2\xb2\xb2";
			for(i=0;i<5;i++)
			{
				cout<<"\n\n\t\t \xb2\xb2\xb2\xb2 STUDENT ["<<i+1<<"] \xb2\xb2\xb2\xb2";
				cout<<"\n\n\t\tEnter Lecturer Name   : ";
				getline(cin,f_lecturer[i]);
				cout<<"\n\n\t\tEnter Subject         : ";
				getline(cin,f_subject[i]);
				cout<<"\n\n\t\tEnter Course          : ";
				getline(cin,f_course[i]);
				cout<<"\n\n\t\tEnter No. of Lectures : ";
				cin>>f_lectures[i];
				fflush(stdin);
			}
		}
		
		void display()
		{
			cout<<"\n\n\t\t\t\t\t\t \xb2\xb2\xb2\xb2 DISPLAY \xb2\xb2\xb2\xb2";
			
			for(i=0;i<5;i++)
			{
					cout<<"\n\n\t======================== \xb2\xb2\xb2\xb2 STUDENT ["<<i+1<<"] \xb2\xb2\xb2\xb2==============================";
				cout<<"\n\n\t\t Lecturer Name   : "<<f_lecturer[i];
				cout<<"\n\n\t\t Subject Name    : "<<f_subject[i];
				cout<<"\n\n\t\t Course Name     : "<<f_course[i];
				cout<<"\n\n\t\t No. of Lectures : "<<f_lectures[i]<<endl;
			}
		}
	
};

int main()
{
	lecDetails l;
	l.input();
	l.display();
	return 0;
}