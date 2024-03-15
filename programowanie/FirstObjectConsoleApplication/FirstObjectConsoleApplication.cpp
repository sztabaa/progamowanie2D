
#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
	int z;



public:
	Point()
	{
		x = 3;
		y = 7;
		z = 10;
	 }

	Point(int xx)
	{
		x = xx;
		y = 7;
		z = 10;
	}

	Point(int xx , int yy , int zz)
	{
		x = xx;
		y = yy;
		z = zz;
	}

	~Point()
	{
		cout << "Teraz działa destruktor \n";
	}

	void setX(int value)
	{
		//x=abs(value);
		if (value >= 0)
		{
			x = value;
		}
		else
		{
			//reakcja na błąd
		}
	}

	int getX()
	{
		//if (uprawnienia)

		return x;
	}

	double distanceFromCenter()
	{
		double distance;
		distance = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
		return distance;
	}

	
};

class Rectrangle
{
private:
	 int firstSide;
	 int secondSide;
	 int thirdSide;
	 int fourthSide;
public:
	Rectrangle()
	{
		firstSide = 3;
		secondSide = 3;
		thirdSide = 5;
		fourthSide = 5;
	}
 
	Rectrangle(int side1, int side2)
	{
		firstSide = secondSide = side1;
		thirdSide = fourthSide = side2;
	}

	double AreaOfRectrangle()
	{
		double area;
		area = firstSide * thirdSide;
		return area;

	 }

	double CircutOfRectrangle()
	{
		double Circut;
		Circut = 2 * firstSide + 2 * thirdSide;
		return Circut;
	}

	void  InformationAboutRectrangle()
	{
		cout << "obwód: " << CircutOfRectrangle() << "\n";
		cout << "pole: " << AreaOfRectrangle() << "\n";
		
	 }

};

class  Account
{
private:
	float accountBalance;

public:

	Account(int money)
	{
		accountBalance = money;
	}

	~Account()
	{

	}

	Account(Account& p)
	{
		accountBalance = p.accountBalance;
	}

	int Payment(int howMuchMoney)
	{
		accountBalance = accountBalance + howMuchMoney;
		return accountBalance;
	}


	bool Paycheck(int howMuchMoney)
	{
		if (howMuchMoney <= accountBalance)
		{
			accountBalance = accountBalance - howMuchMoney;
			return true;
		}
		return false;
	}

	void AccountInformation()
	{
		if (accountBalance >= 0)
		{
			cout << "aktualny stan konta wynosi: " << accountBalance;
		}
		else
		{
			cout << "błąd w systemie!!! ";
		}
	}

	bool Transfer(int howMuch, Account& target)
	{
		if (Paycheck(howMuch))
		{
			target.Payment(howMuch);
			return true;
		}
		return false;
	}
};



int main()
{
	setlocale(LC_CTYPE, "polish");
	//{
	//	Point firstPoint;
	//	firstPoint.setX(-3);
	//	//firstPoint.x = 3;
	//	//firstPoint.y = 5;
	//	//firstPoint.z = 8;



	//	cout << "Odległość:  " << firstPoint.distanceFromCenter() << "\n";
	//}

	//Point secondPoint(15);
	//cout << "Odległość: " << secondPoint.distanceFromCenter() << "\n";
	//Rectrangle firstRectrangle;

	//firstRectrangle.InformationAboutRectrangle();



	Account konto1(150);
	Account konto2(10);

	
	konto1.AccountInformation();
	cout << "\n";
	konto2.AccountInformation();

	cout << "\n" << "TEST METODY WPLACANIA" << "\n";

	
	cout << "\n";
	konto1.Payment(4000);
	konto1.AccountInformation();
	std::cout << "\n";
	konto2.Payment(789);
	konto2.AccountInformation();

	cout << "\n" << "TEST METODY WYPLACANIA" << "\n";


	cout << "\n";
	konto1.Paycheck(1900);
	konto1.AccountInformation();
	cout << "\n";
	konto2.Paycheck(763);
	konto2.AccountInformation();

	cout << "\n" << "TEST PRZELEWU NA KONTO" << "\n";

	
	cout << "\n";

	if (konto1.Transfer(23, konto2))
		cout << "przelew się udał" << "\n";
	else
		cout << "przelew się nie udał" << "\n";

	konto1.AccountInformation();
	cout << "\n";
	konto2.AccountInformation();
}
