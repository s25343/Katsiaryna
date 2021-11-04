# include <iostream>
# include <string>
int main()
{
int a,b;
std::cout<<"Podaj pierwsza liczbe"<<std::endl;
std::cin>>a;
std::cout<<"Podaj druda liczbe"<<std::endl;
std::cin>>b;
if(a>b){
std::cout<<"Wieksza liczba = "<<a;
}
else {
std::cout<<"Wieksza liczba = "<<b;
}
return 0;
}
