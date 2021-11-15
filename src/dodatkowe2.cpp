#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a; 
	int b; 
	cout<<"podaj rok"<<endl;
	cin>>b;
	cout<<"podaj miesiac"<<endl;
	cin>>a;
	if(b%4==0)
	{
	switch (a)
	{
	case 1:
		cout<<"styczen ma 31 dni"<<endl;
		break;

		case 2:
		cout<<"luty ma 28 dni"<<endl;
		break;

		case 3:
		cout<<"marzec ma 31 dni"<<endl;
		break;

		case 4:
		cout<<"kwiecien ma 30 dni"<<endl;
		break;

		case 5:
		cout<<"maj ma 31 dni"<<endl;
		break;

		case 6:
		cout<<"czerwiec ma 31 dni"<<endl;
		break;

		case 7:
		cout<<"lipiec ma 31 dni"<<endl;
		break;

		case 8:
		cout<<"sierpien ma 31 dni"<<endl;
		break;

		case 9:
		cout<<"wrzesien ma 30 dni"<<endl;
		break;

		case 10:
		cout<<"pazdziernik ma 31 dni"<<endl;
		break;

		case 11:
		cout<<"listopad ma 30 dni"<<endl;
		break;

		case 12:
		cout<<"grudzien ma 31 dni"<<endl;
		break;
	}


}
else
{
		switch (a)
	{
	case 1:
		cout<<"styczen ma 31 dni"<<endl;
		break;

		case 2:
		cout<<"luty ma 29 dni"<<endl;
		break;

		case 3:
		cout<<"marzec ma 31 dni"<<endl;
		break;

		case 4:
		cout<<"kwiecien ma 30 dni"<<endl;
		break;

		case 5:
		cout<<"maj ma 31 dni"<<endl;
		break;

		case 6:
		cout<<"czerwiec ma 31 dni"<<endl;
		break;

		case 7:
		cout<<"lipiec ma 31 dni"<<endl;
		break;

		case 8:
		cout<<"sierpien ma 31 dni"<<endl;
		break;

		case 9:
		cout<<"wrzesien ma 30 dni"<<endl;
		break;

		case 10:
		cout<<"pazdziernik ma 31 dni"<<endl;
		break;

		case 11:
		cout<<"listopad ma 30 dni"<<endl;
		break;

		case 12:
		cout<<"grudzien ma 31 dni"<<endl;
		break;
	}

}



	return 0;
}
