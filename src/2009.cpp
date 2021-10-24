#include <iostream>
using namespace std;
int main()
{
int a, i, b;
cin>>a;
b=1;
if(a>0)
{
    auto i = 1;
    do
    {
        b=b*i;
        cout<<b<<endl;
        ++i;
    } while (i <= a);
}
return 0;
}
