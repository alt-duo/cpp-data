#include <iostream>
using namespace std;
int gcd(int x,int y)
{
	int t;
	t=x%y;
	if(t==0)
	return y;
	else return gcd(y,t);
}
int main()
{
	int a,b,l,a1,b1,a2,b2;
	cin>>a>>b>>l;
	a2=100;b2=1;
    for(a1=l;a1>=1;a1--)
	  for(b1=l;b1>=1;b1--)
	  {
	  	if(a1*b>=a*b1) 
	  	  if(gcd(a1,b1)==1)
	  	    if(a2*b1>b2*a1)	  	        
          {
   	          a2=a1;
              b2=b1;
          }
	  }
      cout<<a2<<" "<<b2;
      return 0;
}
