#include <iostream>
#include <string>
using namespace std;

void asum(int n)
{
	int suma=0;
	int* a=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"liczba numer "<<i<<endl;
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		suma=suma+a[i];
	}
	cout<<suma;
}

int main()
{
    int n;
    cout << "ilosc"<<endl;
    cin>>n;
    asum(n);
    return 0;
}
