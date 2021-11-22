#include <iostream>
using namespace std;
int main()
{
    int h;
    cout<<"Podaj liczbe "<<endl;
    cin>>h;
    for(int i=0;i<h;i++)
    {
        for(int j=1;j<h-i;j++)
            cout<<"*";
        for(int j=h-i;j<=h+i;j++)
            cout<<" ";
        for(int j=h+i+1;j<h*2;j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}

