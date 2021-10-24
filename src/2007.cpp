#include <iostream>
using namespace std;
int main()
{
int a, b, c, sum;
cout<<"POdaj limit"<<endl;
    cin >> a;
    cout<<"podaj dzielnik"<<endl;
    cin>>b;
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
