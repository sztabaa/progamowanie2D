


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

//Program sprawdzaj�cy czy podana liczba jest parzysta czy nieparzysta
void task2()
{
	int a;
	int b;
	cout << "wpisz liczbe a :    ";
	cin >> a;
	if (a % 2 == 1)
	{
		cout << "liczba jest nieparzysta";
	}
	else
	{
		cout << "liczba jest parzysta";
	}
}

//Program sprawdzaj�cy czy podana liczba jest dodatnia, ujemna czy r�wna zero
void task3()
{
	int a;
	cout << "wypisz liczbe a :     ";
	cin >> a;
	if (a > 0)
	{
		cout << "liczba jest dodatnia";
	}
	else if (a < 0)
	{
		cout << " liczba jest ujemna";
	}
	else if (a == 0)
	{
		cout << "liczba jest r�wna zero";
	}
}
//Program sprawdzaj�cy czy podany rok jest rokiem przest�pnym
void task4()
{
	int year;
	cout << " podaj rok :     ";
	cin >> year;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		cout << "ten rok jest przestepny";
	}
	else 
	{
		cout << "rok nie jest przestepny";
	}
}
// Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
 void task5()
{
	 int a;
	 cout << "wpisz liczbe od 1 do 6 :    ";
	 cin >> a;
	 if (a == 1) {
		 cout << "niedostateczny";
	 }
	 if (a == 2) {
		 cout << " dopuszczaj�cy";
	 }
	 if (a == 3) {
		 cout << "dostateczny";
	 }
	 if (a == 4) {
		 cout << "dobry";
	 }
	 if (a == 5) {
		 cout << "bardzo dobry";
	 }
	 if (a == 6) {
		 cout << "celuj�cy";
	 }
	 else {
		 cout << "to nie jest stopie�";
	 }
}
 // Program sprawdzaj�cy czy podane has�o jest poprawne (np. je�li has�o jest "abc123", program powinien wy�wietli� "has�o poprawne", je�li jest inne, powinien wy�wietli� "has�o niepoprawne").
 void task6()
 {
	 string password;
	 cout << "wpisz has�o :    ";
	 cin >> password;
	 if (password == "stolec")
	 {
		 cout << "has�o poprawne";
	 }
	 else
	 {
		 cout << "has�o niepoprawne";
	 }

 }
 //Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
 void task7()
 {
	 int day;
	int month;
	int year;
	 cout << "napisz dzie� miesi�ca:    ";
		 cin >> day;
		 cout << "napisz miesi�c:     ";
		 cin >> month;
		 cout << "napisz rok :         ";
		 cin >> year;
		 if (day <= 31 && month <= 12 && day > 0 && month > 0)
		 {
		
		 }

		

 }
 //Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej temperatury (np. "ciep�o" dla temperatury powy�ej 20 stopni Celsjusza, "ch�odno" dla temperatury poni�ej 10 stopni Celsjusza itd.)
 


 void task8()
 {
	 int a;
	 cout << "napisz temperature:      ";
	 cin >> a;
	 if (a > 20)
	 {
		 cout << "ciep�o";
	 }
	 else if (a < 10)
	 {
		 cout << "ch�odno";
	 }
 }
 //Program sprawdzj�cy czy podana liczba jest z przedia�u <1;15)
 void task9()
 {
	 int liczba;
	 cout << "wprowadz liczbe:   ";
	 cin >> liczba;
	 if (liczba >= 1 && liczba < 15)
	 {
		 cout << "liczba jest w przedziale";
	 }
 }
 //Program sprawdzaj�cy czy osoba jest pe�noletnia.
 void task10()
 {
	 int wiek;
	 cout << "wpisz wiek";
		 cin >> wiek;
		 if (wiek >= 18)
		 {
			 cout << " osoba jest pe�noletnia";
		 }
		 else 
		 {
			 cout << " osoba jest niepe�nioletnia";
		 }

 }
 //Program, kt�ry sprawdzi czy z podanych d�ugo�ci bok�w mo�na zrobi� tr�jk�t.
 void task11()
 {
	 int bok1;
	 int bok2;
	 int bok3;
	 cout << "podaj pierwszy bok:     ";
	 cin >> bok1;
	 cout << "podaj pierwszy bok:     ";
	 cin >> bok2;
	 cout << "podaj pierwszy bok:     ";
	 cin >> bok3;
	 if ((bok1 < bok2 + bok3)&& (bok2 < bok1 + bok3) && (bok3 < bok1 + bok2))
	 {
		 cout << " z podanych bok�w mo�na zrobi� tr�jk�t";
	 }
	 else
	 {
		 cout << " nie da sie z tych bok�w zrobi� tr�jk�ta";
	 }

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
	//task7();
	//task8();
	//task9();
	//task10();
	task11();
}


