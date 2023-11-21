
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
//Program wyœwietlaj¹cy na ekranie ci¹g Fibonacciego do 20 elementu (ci¹g Fibonacciego to ci¹g gdzie ka¿dy element jest sum¹ dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task8()
{
	cout << "0 , 1, ";

	int fib2 = 0;
	int fib1 = 1;
	for (int i = 0; i < 18; i++)
	{
		int fib = fib2 + fib1;
	    cout << fib << ", ";
		fib2 = fib1;
		fib1 = fib;
	}

}


//Program obliczaj¹cy sumê kwadratów liczb od 1 do 10
void task9()
{
	int sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		sum = (i*i) + sum;
	}
	cout << "suma kwadratow od 1 do 10 wynosi :  "<< sum ;
}

//Program, kóry wyœwietli poni¿sze cztery zwory:
//**** 54321        121212        122333
//***  65432        212121        223334444
//**   76543        121212        333444455555
//    87654        212121        444455555666666

void task10()
{
	cout << "przyklad nr 1 \n";

	for (int i = 4; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	cout << "przyklad numer 2 \n";

	for (int i = 0; i < 4; i++)
	{
		for (int j = 5; j > 0; j--)
		{
			cout << j + i;
		}
		cout << "\n";
	}

	cout << "przyklad nr 3 \n";

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << (i + j) % 2 +1;
		}
		cout << "\n";
	}
	

	cout << "przyklad nr 4 \n";

	for (int i = 0; i < 4; i++)
	{
		for (int j = i +1 ; j <=i + 3; j++)
		{
			for (int k = 0; k < j; k++)
			{
				cout << j;
			}
		}
		cout << "\n";
	}

// Napisz program, który policzy sumê cyfr podanej przez u¿ytkownika liczby.
void task11()
{
	do()
	{

	} while ();



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
	//task8();
	//task9();
	task10();
	//task11();
}
