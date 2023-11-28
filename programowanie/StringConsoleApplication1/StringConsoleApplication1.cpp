// Napisz program, który bêdzie prosi³ o has³o. Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
// Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
//* Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym.Nastêpnie skonwertuj tê liczbê na system dwójkowy(binarny) i wyœwietl wynik.
//* Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem(czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
//* Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami(czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
//*
//
//* Program wyci¹gaj¹cy informacje z numeru PESEL
//* Program implementuj¹cy algorytm szyfrowania Cezara(proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).


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
//	Napisz program, który bêdzie prosi³ o has³o.Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
void task3()
{
	string createPassword;
	string password;
	cout << "utwurz haslo \n";
	cin >> createPassword;

	do
	{
		cout << "zaloguj sie\n";
		cin >> password;

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
//Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
void task4()
{
	string textFromUser;
	int vowel = 0;
	int consonant = 0;

	cout << "podaj zdanie do sprawdzenia:   ";
	cin >> textFromUser;

	for (int i = 0; i <= textFromUser.length(); i++)
	{
		if (textFromUser[i] >= 'A' && textFromUser[i] <= 'Z' || textFromUser[i] >= 'a' && textFromUser[i] <= 'z')
		{
			if (textFromUser[i] == 'A'
				|| textFromUser[i] == 'a'
				|| textFromUser[i] == 'e'
				|| textFromUser[i] == 'E'
				|| textFromUser[i] == 'o'
				|| textFromUser[i] == 'O'
				|| textFromUser[i] == 'y'
				|| textFromUser[i] == 'Y'
				|| textFromUser[i] == 'u'
				|| textFromUser[i] == 'U'
				|| textFromUser[i] == 'I'
				|| textFromUser[i] == 'i')
			{
				vowel++;
			}
			else
			{
				consonant++;
			}
			
		}
		
	}
	cout << " w tym tekscie jest: \n" << vowel << "samoglosek \n" << consonant << " spolglosek";
}

int main()
{
	//task1();
	//task2();
	//task3();
	task4();
}


