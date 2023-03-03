#include<iostream>
using namespace std;
class line
{
   public:
              inline float mul(float x,float y)
              {
                            return(x*y);
              }
              inline float cube(float z)
              {
                            return(z*z*z);
              }
};

int main()
{
              line obj;
              float val1,val2,val3;
			  cout<<"\n-*-*-*-*-*-* MULTIPLICATION *-*-*-*-*-*-*";	
              cout<<"\nEnter 1st value :: ";
              cin>>val1;
              cout<<"\nEnter 2nd value :: ";
              cin>>val2;
              cout<<"\n\nMultiplication value is :: "<<obj.mul(val1,val2);
              cout<<"\n\n\n-*-*-*-*-*-* CUBE *-*-*-*-*-*-";
              cout<<"\n\nEnter the cube value::";
              cin>>val3;
              cout<<"\n\nCube value of :" <<obj.cube(val3);

              return 0;
}
