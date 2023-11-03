
using namespace std;
#include <iostream>

//Program wyœwietlaj¹cy na ekranie kolejne liczby naturalne od 1 do 10
void task1()
{
	
	for ( int i = 1; i < 11; i++)
	{
		cout << i << "\n";
	}
}

void task2()
{
	int number=0;
	for (int i = 1; i < 101; i++)
	{
		 number = number + i;
		
	}
	cout << "suma liczb od 1 do 100 wynosi:  " << number;
}

void task3()
{
	for (int i = 1; i < 11; i++)
	{
		cout << pow(i, 2) << "\n";
	}

}

// Program obliczaj¹cy n!.
void task4()
{
	int number;
	double  silnia = 1;

	cout << "podaj liczbe do silni:  ";
	cin >> number;

	for (int i = 1; i <= number; i++)
	{
		silnia = silnia * i;
	}
	cout << " silnia wynosi :   " << silnia;
}

//Program wyœwietlaj¹cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
void task5()
{
	double silnia = 1;

	for (int i = 1; i <= 10; i++)
	{
		silnia = silnia * i;
		cout << " silnia z  " <<   i  << "  wynosi : " << silnia << "\n";
	}
}
//Program wyœwietlaj¹cy na ekranie tabliczkê mno¿enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
void task6()
{
	int number = 1;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << i << "*" << j << "=" << i * j << "\n";
		}
		cout << endl;
	}

}

//Program wyœwietlaj¹cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task7()
{
	for (int i = 1; i <=100; i++)
	{
		if(i % 3 == 0)
			
		{
			cout << i<<"\n";
		}
	}
}
int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
}
