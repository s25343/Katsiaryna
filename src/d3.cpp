#include <iostream>

using namespace std;
int main()
{
int h, m=2, p=0;
bool czy = true;
cout << "Liczba ";
cin>>h;
if (h==0 || h==1)
{
p=p+1;
czy = false;
}
else
{
while(m<= h/2)
{
p=p+1;
m++;
if (h%m==0)
{
czy=false;
break;
}
}
}
if (czy)
cout << h << " pierwsza" << p;
else
cout << h << " nie pierwsza" << p;
return 0;
}

