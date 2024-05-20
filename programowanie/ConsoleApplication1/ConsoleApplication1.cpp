
#include <iostream>
using namespace std;

//class Licz 
//{
//private:
//	float number;
//
//public:
//
//	float dodaj(float addNumber)
//	{
//		return number + addNumber;
//	}
//
//	float odejmij(float minusNumber)
//	{
//		return number - minusNumber;
//	}
//
//	Licz()
//	{
//		number = 0;
//	}
//
//	Licz(float numberValue)
//	{
//		number = numberValue;
//	}
//
//};

//class Sumator
//{
//private:
//	int numberBoard[2];
//public:
//
//	Sumator()
//	{
//		numberBoard[0] = 0;
//		numberBoard[1] = 0;
//		numberBoard[2] = 0;
//	};
//
//	Sumator(int randomNumber)
//	{
//		for (int i = 0; i <= 2; i++)
//		{
//		numberBoard[i]= rand() % randomNumber + 1;
//		}
//	};
//
//	int sum(){
//		int sum = 0;
//
//		for (int i = 0; i <= 2; i++)
//		{
//			sum = sum + numberBoard[i];
//		}
//	};
//
//	int SumaPodziel3()
//	{
//		int sum = 0;
//
//		for (int i = 0; i <=2 ; i++)
//		{
//			if(numberBoard[i] % 3 ==0) {
//				sum = sum + numberBoard[i];
//			}
//		}
//	};
//
//	int elements()
//	{
//		cout << "pierwszy element tablicy: " << numberBoard[0] << "drugi element tablicy: " << numberBoard[1] << "trzeci element tablicy: " << numberBoard[2];
//	}
//
//	int index(int lowIndex, int highIndex)
//	{
//		for (int i = 0; i <=2 ; i++)
//		{
//			if (numberBoard[i] >= lowIndex)
//			{
//				cout << numberBoard[i] << "\n";
//			}
//		};
//
//		for (int i = 0; i <= 2; i++)
//		{
//			if (numberBoard[i] <= highIndex)
//			{
//				cout << numberBoard[i] << "\n";
//			}
//		};
//	};
//
//
//	
//
//};

class Osoba {
private:
	string firstName;
	string lastName;
	int age;
public:

	Osoba(string firstName, string lastName, int age)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->age = age;
	}

	void wypisz()
	{
		cout << firstName << "\n";
		cout << lastName << "\n";
		cout << age << "\n";
	}
};
Osoba createPerson()
{
	string firstName;
	string lastName;
	int age;

	cout << "podaj imie: ";
	cin >> firstName;
	cout << "podaj nazwisko: ";
	cin >> lastName;
	cout << "podaj wiek: ";
	cin >> age;
	Osoba informacje(firstName, lastName, age);
	return informacje;
}

class Ksi¹¿ka : public Osoba
{
private:
	string tytul;
	Osoba autor;
	

public:
};
int main()
{
	/*Licz obliczenia(10);

	cout << obliczenia.dodaj(5)<<"\n";

	cout << obliczenia.odejmij(4)<<"\n";*/

	Osoba newPerson = createPerson();
	newPerson.wypisz();


}

