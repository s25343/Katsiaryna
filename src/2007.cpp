

#include <iostream>
using namespace std;
int main()
{
int a, b;
int sum=0;
cout<<"POdaj limit"<<endl;
    cin >> a;
    cout<<"podaj dzielnik"<<endl;
    cin>>b;
if(a>0)
{
    for (int i = 1; i<=a; i++)
        if (i%b==0)
    {
        sum=sum+i;
        cout<<"sum= "<<sum<<endl;
    }
}
return 0;
}


