#include <iostream>
using namespace std;
int main()
{
int a;
cout<< "Koordynaty prostokujata "<<endl;
cin>>a;
for (int z=1; z<=2; z++)
    for (int t=1; t<=a; t++)
    {
        cout<<"*";
    }
return 0;
}
