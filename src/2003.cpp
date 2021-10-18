
#include <iostream>
#include <string>

int main()
{
int a,b,s;
std::cout<<"podaj dwie liczbe "<<std::endl;
std::cin>>a;
std::cin>>b;
std::cout<<"podaj s"<<std::endl;
std::cin>>s;
for(int i=10; i>=a; i=i-s)
{
std::cout<<"A:"<<i<<std::endl;
}
for (int  j=0; j<b; j=j+s)
{
std::cout<<"B:"<<j<<std::endl;
}
return 0;
}

