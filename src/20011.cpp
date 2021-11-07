#include <iostream>

using namespace std;
int main()
{
	int a,b;
	cout<<"Podaj koordynaty wysokosci "<<endl;
	cin>>a;
	cout<<"podaj koordynaty dlugosci"<<endl;
	cin>>b;
	for(int i=0; i<a; i++)
	{
		for(int n=0; n<b; n++)
		{
		    cout<<"*";
		}
	cout<<endl;
	}
	return 0;
}
