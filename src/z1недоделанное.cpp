#include <iostream>

using namespace std;

int pierwszaliczba(int a){

if(a%2==0 || a%3==0 || a%5==0 || a%7==0)
cout << "";
else if(a==2 || a==3 || a==5 || a==7)
cout << a << ' ';
else
cout << a << " ";
return a;
}

int main()
{
    int a;
for (int c=0; c<2; c++){
    for (int a=2; a<=20; a++){
        
        if(pierwszaliczba(a)==true)
        cout << a << " ";
        else 
        cout << "";
    }
    cout << "\n";
}
return 0;
}
