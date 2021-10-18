#include <iostream>
int main()
{
int a;
std::cout<<"podaj a"<<std::endl;
std::cin>>a;
if(a>0)
{
std::cout<<"1"<<std::endl;

}
else if (a<0)
{
std::cout<<"-1"<<std::endl;
}
else 
{
std::cout<<"0"<<std::endl;
}
return 0;
}
