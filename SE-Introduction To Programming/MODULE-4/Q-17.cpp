#include<iostream>
#include<conio.h>
using namespace std;

class math{
	public:
		int x;
		void input()
		{
			cin>>x;
		}
		int display()
		{
			return x;
		}
		math operator+(math y)
		{
			cout<<"\n\n\t\t ADDITION  :- "<<(x+y.x);
			return y;
		}
			math operator-(math y)
		{
			cout<<"\n\n\t\t SUBTRACTION  :- "<<(x-y.x);
			return y;
		}	math operator*(math y)
		{
			cout<<"\n\n\t\t MULTIPLICATION  :- "<<(x*y.x);
			return y;
		}	math operator/(math y)
		{
			cout<<"\n\n\t\t DIVISION  :- "<<(x/y.x);
			return y;
		}
};
int main()
{
	int ch,j;
	math h,i;
	
	cout<<"\n\n\t\t Enter A : ";
	h.input();
	cout<<"\n\n\t\t Enter B : ";
	i.input();
	cout<<"\n\n\t\t A = "<<h.display();     
	cout<<"\t B = "<<i.display();   
	
	for(j=1;j<5;j++)
	{
    cout<<"\n\n\t\t 1 . ADDITION       ";
    cout<<"\n\n\t\t 2 . SUBTRACTION    ";
    cout<<"\n\n\t\t 3 . MULTIPLICATION ";
	cout<<"\n\n\t\t 4 . DIVISION       ";
	cout<<"\n\n\t\t 0 . exit           ";
	   cout<<"\n\n\t\t\t  ENTER YOUR CHOICE :- ";
	   cin>>ch;
	     switch(ch)
		 {
		 	case 1 : h+i        ; 
		 	     break;
		 	case 2 : h-i            ;
		 	      break;
		 	case 3 : h*i            ;
		 	      break;
		 	case 4 : h/i            ;
		 	      break;
		 	case 0: exit(0);
		 	      break;
    	 }        
		 cout<<"\n\n\t\t PRESS ANY KEY TO RETURN MENU :- ";
		 getch();    
	}

	return 0;
}
