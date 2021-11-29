#include <iostream>
using namespace std;

void asum(int n)
{
	int max=0;
	int s=0;
	int* a=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"numer liczy "<<i<<endl;
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{if(max<a[i])
		{
			max=a[i];
			s=i;
		}
	}
	cout<<"max liczba to numer "<<s;
}

int main()
{
    int n;
    cout <<"Podaj n"<<endl;
    cin>>n;
    asum(n);
    return 0;
}
