#include <iostream>
#include <string>

int main()
{
int a,b;
std::cout<<"podaj dwie liczbe "<<std::endl;
std::cin>>a;
std::cin>>b;
for(int i=10; i>=a; i--)
{
std::cout<<"A:"<<i<<std::endl;
}
for (int  j=0; j<b; j++)
{
std::cout<<"B:"<<j<<std::endl;
}
return 0;
}
