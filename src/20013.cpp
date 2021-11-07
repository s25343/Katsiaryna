#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Podaj wielkosc trojkata";
	cin>>a>>b;
	for(int i=0; i<a;i++)
	{
		for(int j=b;j>0;j--)
		{
			cout<<"*";
		}
		cout<<endl;
		b=b-1;

	}
	return 0;
}
