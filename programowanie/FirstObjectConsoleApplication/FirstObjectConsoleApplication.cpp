
#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
	int z;



public:
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


int main()
{
	setlocale(LC_CTYPE, "polish");

	Point firstPoint;
	firstPoint.setX(-3);
	//firstPoint.x = 3;
	//firstPoint.y = 5;
	//firstPoint.z = 8;

	cout << "Odleg³oœæ:  " << firstPoint.distanceFromCenter() << "\n";


}

