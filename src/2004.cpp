#include <iostream>

using namespace std;


int main()
{
    cout << "Podaj liczbe" << endl;
    int a, b;
    cin>>a;
    {
    if ((a==2) || (a==3) || (a==5) || (a==7))
    {
        cout <<"Podchodzi"<<endl;
    }
    else if ((a%2==0) || (a%3==0) || (a%5==0) || (a%7==0))
    {
        cout<<"Nie podchodzi"<<endl;
    }
    else{
        cout <<"Podchodzi"<<endl;
    }
    }
    return 0;
}
