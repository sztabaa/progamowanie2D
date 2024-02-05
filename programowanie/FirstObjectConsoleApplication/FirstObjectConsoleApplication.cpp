
#include <iostream>
using namespace std;

struct Point
{
	int x;
	int y;
	int z;
};

double distanceFromCenter(point p)
{
	double distance;
	distance = sqrt(pow(p.x, 2) + pow(p.y, 2) + pow(p.z, 2));
	return distance;
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	Point firstPoint;
	firstPoint.x = 3;
	firstPoint.y = 5;
	firstPoint.z = 8;

	cout << "Odleg³oœæ:  " << distanceFromCenter(firstPoint) << "\n";


}

