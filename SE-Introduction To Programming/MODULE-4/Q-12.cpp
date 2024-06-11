#include<iostream>
using namespace std;
class maths{
   public:
    float radius;
    float py;
    int length;
    int breadth;
    int base;
    float height;
float carea;
float rarea;
float tarea;

         void area(float r,float pi)
         {
      
          radius=r;
          py=pi;
           carea=4*py*radius*radius;

          cout<<"\n\n\t\t The  Area Of Circle Is : "<<carea;
         
           }
         void area(int l,int b)
         {
          length=l;
          breadth=b;
            rarea=length*breadth;
            
          cout<<"\n\n\t\t The  Area Of Rectengle Is : "<<rarea;

         }
         void area(int ba,float h)
         {
          base=ba;
          height=h;
          tarea=base*height/2;
          cout<<"\n\n\t\t The  Area Of Triangle Is : "<<tarea;

          
         }

};

int main()
{
  float r;
  int l;
  int b;
  int ba;
  float h;
  cout<<"\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2 AREA ZONE \xb2\xb2\xb2\xb2\xb2";

  cout<<"\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2 Circle \xb2\xb2\xb2\xb2\xb2";

  cout<<"\n\n\t\t Enter Radius Of Circle  : ";
  cin>>r;
  maths obj;
  obj.area(r,3.14);
  cout<<"\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2 RECTENGLE \xb2\xb2\xb2\xb2\xb2";

  cout<<"\n\n\t\t Enter length Of Rectengle   : ";
  cin>>l;
  cout<<"\n\n\t\t Enter breadth Of Rectengle  : ";
  cin>>b;
  obj.area(l,b);
  cout<<"\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2 TRIANGLE \xb2\xb2\xb2\xb2\xb2";
  cout<<"\n\n\t\t Enter Base Of Triangle     : ";
  cin>>ba;
  cout<<"\n\n\t\t Enter Height Of Triangle   : ";
  cin>>h;
obj.area(ba,h);
  return 0;
}