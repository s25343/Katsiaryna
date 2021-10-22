#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Podaj liczbe"<<endl;
    cin>>a;
    if (a>1)
    {
        for(int i=2; i<a; i++)
            if (a%i==0)
        {
              cout<<"Nie Prawda"<<endl;
        }
        else
        {
              cout<<"Prawda"<<endl;
        }
    }
    return 0;
}
