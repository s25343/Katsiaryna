#include <iostream>
using namespace std;
int main()
{
int a, b, c, max, min;
cout<<"podaj a"<<endl;
cin>>a;
cout<<"podaj b"<<endl;
cin>>b;
cout<<"podaj c"<<endl;
cin>>c;
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
cout<<"Najwielksza liczba to = "<<max<<endl;
return 0;
}
