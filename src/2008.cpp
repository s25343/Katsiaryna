#include <iostream>
using namespace std;
int main()
{
int a, b;
cin>>a;
b=1;
if(a>0)
{
   for (int i = 1; i<=a; i++)
    {
        b *= i;
        cout<<b<<endl;
    }
}
return 0;
}
