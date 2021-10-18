# include <iostream>
# include <string>
auto zapytaj(std :: string prompt) -> int
{
int n;
std::cout << prompt<<": /n";
std::cin >>n;
return n;
}
auto dodaj(int a, int b)-> int
{
return a*b;
}
auto main() -> int
{
int a,b,c;
a = zapytaj("podaj a");
b = zapytaj("podaj b");
c = dodaj (a,b);
std::cout<<c<<std::endl;
return 0;
}
