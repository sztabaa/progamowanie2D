


#include <iostream>
using namespace std;

void task1()
{
	double a;
	double b;
	cout << "podaj liczbe a :   ";
	cin >> a;
	cout << "podaj liczbe b :   ";
	cin >> b;

	double quotient = a / b;
	cout << "wynik to :    " << quotient;
	
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	task1();
}


