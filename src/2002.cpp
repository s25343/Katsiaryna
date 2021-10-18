#include <iostream>
#include <string>

int main()
{
int a,b,c;
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
std::cout<<"podaj trzecie liczbe "<<std::endl;
std::cin>>c;
for(int l=10; l>=c; l--){
if (l%c==0){
std::cout<<"C:"<<l;
}std::cout<<std::endl;
}
return 0;
}

