
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
		cout << "Teraz dzia³a destruktor \n";
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
			//reakcja na b³¹d
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

class Account
{
private:
	float accountBalance1;

public:
};

class Account2
{
private:
	float accountBalance2;

public:
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



	//	cout << "Odleg³oœæ:  " << firstPoint.distanceFromCenter() << "\n";
	//}

	//Point secondPoint(15);
	//cout << "Odleg³oœæ: " << secondPoint.distanceFromCenter() << "\n";
	//Rectrangle firstRectrangle;

	//firstRectrangle.InformationAboutRectrangle();

	Account firstAcc;
	Account2 secondAcc;
}

