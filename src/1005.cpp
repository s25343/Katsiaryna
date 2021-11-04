#include <iostream>
using namespace std;
int main(int argc, char** argv)

{
int a;
cout<< "Podaj a "<<endl;
cin >>a;
if(a>0)
{
    cout<<"a wynosi : "<<a<<endl;
}
else
{
 cout<<"Wartosc bezwzgledna z %d to %d\n"<< a, abs(a);
    cout<<"a wynosi : "<<abs(a)<<endl;
}

    return 0;
}
