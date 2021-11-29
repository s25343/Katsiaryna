#include <iostream>
#include <string>
using namespace std;

void iota(int n, int s)
{
	int* a=new int[n];
	int i=s;
	for(i;i<n+s;i++)
	{
		cout<<i<<endl;
	}
}

int main()
{
    int n, s;
    cout << "Podaj liczbe"<<endl;
    cin>>n;
    cout<<"Podaj poczatek"<<endl;
    cin>>s;
    iota(n, s);
    return 0;
}
