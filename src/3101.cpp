#include <iostream>
#include <string>
using namespace std;

void init(int n)
{
	int* a = new int[n];
	for(int i = 0; i < n; i++)
	{
		a[i]=0;
	}
	for( int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}

int main()
{
    int n;
    cout << "Podaj liczbe" << endl;
    cin >> n;
    init (n);
    return 0;
}
