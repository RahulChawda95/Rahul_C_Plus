#include<iostream>
using namespace std;

class maths
{
public:

  void asmd(int a,int b)
  {
    cout<<"\n\n\t\t addition       is  : "<<(a+b);
  }
  void asmd(float c,int d)
  {
    cout<<"\n\n\t\t subtraction    is  : "<<(c-d);
  }
   void asmd(int e,float f)
  {
    cout<<"\n\n\t\t multiplication is  : "<<(e*f);
  }
   void asmd(float g,float h)
  {
    cout<<"\n\n\t\t division is  : "<<(float)(g/h);
  }
  
};
int main()
{
  int a;
  int b;
  float c;
  int d;
  int e;
  float f;
  float g;
  float h;
    cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2\xb2 FUNCTION OVERLOADING \xb2\xb2\xb2\xb2\xb2\xb2";

    cout<<"\n\n\t\t\t \xb2\xb2\xb2\xb2 ADDITION \xb2\xb2\xb2\xb2";

    cout<<"\n\n\t\t Enter A : ";
    cin>>a;
    cout<<"\n\n\t\t Enter B : ";
    cin>>b;
    maths obj;
    obj.asmd(a,b);
    cout<<"\n\n\t\t\t \xb2\xb2\xb2\xb2 SUBTRACTION \xb2\xb2\xb2\xb2";

     cout<<"\n\n\t\t Enter C : ";
    cin>>c;
     cout<<"\n\n\t\t Enter D : ";
    cin>>d;
    obj.asmd(c,d);
    cout<<"\n\n\t\t\t \xb2\xb2\xb2\xb2 MULTIPLICATION \xb2\xb2\xb2\xb2";

     cout<<"\n\n\t\t Enter E : ";
    cin>>e;
     cout<<"\n\n\t\t Enter F : ";
    cin>>f;
    obj.asmd(e,f);
    cout<<"\n\n\t\t\t \xb2\xb2\xb2\xb2 DIVISION \xb2\xb2\xb2\xb2";

     cout<<"\n\n\t\t Enter G : ";
    cin>>g;
     cout<<"\n\n\t\t Enter H : ";
    cin>>h;
    obj.asmd(g,h);

  

  return 0;
}