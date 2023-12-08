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
//Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
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

//* Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym. Nast�pnie skonwertuj t� liczb� na system dw�jkowy (binarny) i wy�wietl wynik.
void task5()
{
	int number;
	int rest;
	string binaryNumber;	

	cout << "Podaj liczbe\n";
	cin >> number;

	do
	{
		rest = number % 2;
		number = number / 2;
		if (rest == 0)
			binaryNumber = "0" + binaryNumber;
		else
			binaryNumber = "1" + binaryNumber;
	} while (number != 0);

	cout << "Liczba binarnie " << binaryNumber;
}

//Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
void task6()
{
	string textFromUser;
	cout << "Podaj napis\n";
	cin >> textFromUser;

	string reverseTextFromUser;
	for (int i = 0; i < textFromUser.length(); i++)
	{
		reverseTextFromUser = textFromUser[i] + reverseTextFromUser;
	}

	if (textFromUser == reverseTextFromUser)
		cout << "To s�owo jest palindromem\n";
	else
		cout << "To s�owo nie jest palindromem\n";


}

//Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
void task7()
{
	string textFromUser1;
	string textFromUser2;

	cout << "podaj pierwszy tekst:  ";
	cin >> textFromUser1;

	cout << "podaj drugi tekst:  ";
	cin >> textFromUser2;

	if (textFromUser1.length() == textFromUser2.length())
	{
		for (int i = 0; i < textFromUser1.length(); i++)
		{
			for (int j = 0; j < textFromUser2.length(); j++)
			{
				if (textFromUser1[i] == textFromUser2[j])
				{
					textFromUser2[j] = ' ';
					break;
				}
			}
		}
		bool areAllZero = true;
		for (int i = 0; i < textFromUser1.length(); i++)
		{
			if (textFromUser1[i] != ' ')
			{
				textFromUser1[i] = false;
				break;
			}

			if (areAllZero)
			{
				cout << " to jest anagram";
			}
			else
			{
				"to nie jest anagram";
			}
		}
	
	}
}


void task8()
{
	string numberOfPesel;

	cout << "podaj numer pesel:   ";
	cin >> numberOfPesel;

	if (numberOfPesel.length() != 11 )
	{
		cout << "pesel musi miec 11 cyfr!!!";
		return;
	}

	for (int i = 0; i < 11; i++)
	{
		if (numberOfPesel[i] < 48 || numberOfPesel[i] > 57)
		{
			cout << " pesel musi zawierac same liczby";
			return;
		}
	}
	int controlSum =
		(numberOfPesel[0] - '0') * 1
		+ (numberOfPesel[1] - '0') * 3
		+ (numberOfPesel[2] - '0') * 7
		+ (numberOfPesel[3] - '0') * 9
		+ (numberOfPesel[4] - '0') * 1
		+ (numberOfPesel[5] - '0') * 3
		+ (numberOfPesel[6] - '0') * 7
		+ (numberOfPesel[7] - '0') * 9
		+ (numberOfPesel[8] - '0') * 1
		+ (numberOfPesel[9] - '0') * 3
		+ (numberOfPesel[10] - '0') * 1;
	if (controlSum % 10 != 0)
	{
		return;
	}
	

	int year = (numberOfPesel[0] - '0') * 10 + (numberOfPesel[1] - '0');
	int month = (numberOfPesel[2] - '0') * 10 + (numberOfPesel[3] - '0');
	int day = (numberOfPesel[4] - '0') * 10 + (numberOfPesel[5] - '0');
   
		
	if (month < 1 || month > 12 || day < 1 || day > 31)
	{
		return;
	}

	if (numberOfPesel[9] % 2 == 1)
	{
		cout << "p�e� - m�czyzna\n";
	}
	else
	{
		cout << "p�e� - kobieta \n";
	}
		cout << "twoja data urodzin to:   " << day << "." << month << "." << year;
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	// task7();
	task8();
}


