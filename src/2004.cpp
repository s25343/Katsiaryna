#include <iostream>

using namespace std;
bool czy(int a)
{
    if (a<2)
return false;
for (int i=2; i*i<=a; i++)
if (a%i==0)
return false;
return true;
}

int main()
{
int a;
cout<<"Podaj liczbe"<<endl;
cin>>a;
if(czy(a))
{
cout<<a<<" podchodzi"<<endl;
}
else
{
cout<<a<<" nie podchodzi"<<endl;
}
return 0;
}
