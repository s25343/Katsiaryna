#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int b;
	cout<<"podaj numer dnia "<<endl;
	cin>>b;
	switch (b)
	{
	case 1:
		cout<<"Poniadzialek"<<endl;
		break;
		case 2:
		cout<<"Wtorek"<<endl;
		break;
		case 3:
		cout<<"Sroda"<<endl;
		break;
		case 4:
		cout<<"Czwartek"<<endl;
		break;
		case 5:
		cout<<"Piatek"<<endl;
		break;
		case 6:
		cout<<"Sobota"<<endl;
		break;
		case 7:
		cout<<"Niadziela"<<endl;
		break;
			default:
cout<<"W tygodniu tylko 7 dni"<<endl;
}
	return 0;
}
