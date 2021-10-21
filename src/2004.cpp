#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Podaj liczbe " << endl;
    cin>>a;
    if ((a==1) || (a==2) || (a==3) || (a==5) || (a==7))
    {
        cout<<"podchodzi"<<endl;
    }
    else
    {
        cout<<"nie podchodzi"<<endl;
    }
    if ((a%1==0) || (a%2==0) || (a%3==0) || (a%5==0) || (a%7==0))
    {
        cout <<" "<<endl;
    }
    else
    {
        cout<<" "<<endl;
    }
    return 0;
}
