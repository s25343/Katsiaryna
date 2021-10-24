#include <iostream>
using namespace std;
int main()
{
int a, b, c, x, max, min;
cout<<"podaj a"<<endl;
cin>>a;
cout<<"podaj b"<<endl;
cin>>b;
cout<<"podaj c"<<endl;
cin>>c;
cout<<"podaj x"<<endl;
cin>>x;
 if(a>b)
   {
    max = a;
    min = b;
   }
 else
   {
    max=b;
    min=a;
   }
if (c>max)
  max=c;
 else if (c<min)
  min=c;
  if (x>max)
    max=x;
    else
    x=min;
    cout<<"Najwielksza liczba to = "<<max<<endl;
return 0;
}
