// Napisz program, kt�ry b�dzie prosi� o has�o. Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
// Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
//* Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym.Nast�pnie skonwertuj t� liczb� na system dw�jkowy(binarny) i wy�wietl wynik.
//* Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem(czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
//* Program sprawdzaj�cy czy podane dwa s�owa s� anagramami(czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
//*
//
//* Program wyci�gaj�cy informacje z numeru PESEL
//* Program implementuj�cy algorytm szyfrowania Cezara(proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).


#include <iostream>
using namespace std;

void task1()
{
	char signFromUser;
	//signFromUser = 'a';
	cout << "Podaj znak  \n";
	cin >> signFromUser;

	cout << "Podales znak" << signFromUser << "\n";

	//if (signFromUser >=97 && signFromUser <=122)
	if (signFromUser >= 'a' && signFromUser <= 'z')
	{
		cout << "Znak jest mala litera alfabetu\n";
	}
	else
	{
		cout << "Znak nie jest mala litera alfabetu\n";
	}

	signFromUser = signFromUser + 2;
	cout << "Podales znak  " << signFromUser << "\n";

	signFromUser = 'a' + 2;
	cout << "Podales znak  " << signFromUser << "\n";
}

void task2()
{
	string userName;
	//username ="Ala";
	cout << "podaj swoje imie\n";
	cin >> userName;

	cout << "No hej   " << userName << "\n";
}
//	Napisz program, kt�ry b�dzie prosi� o has�o.Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
void task3()
{
	string createPassword;
	string password;
	cout << "utwurz haslo \n";
	cin >> createPassword;

	cout << "zaloguj sie\n";
	cin >> password;

	do
	{
		if (password == createPassword)
		{
			cout << "haslo jest poprawne";
		}
		else
		{
			cout << "zle!!!";
		}

	} while (password != createPassword);
}

int main()
{
	//task1();
	//task2();
	task3();
}


