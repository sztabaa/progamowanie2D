
using namespace std;
#include <iostream>

struct point
{
	int x;
	int y;
	int z;
};

double distanceFromCenter(int x, int y ,int z)
{
	double distance;
	distance = sqrt(pow(x, 2) + pow(y, 2) + pow(z,2));
	return distance;
}

double distanceFromCenter(point p)
{
	double distance;
	distance = sqrt(pow(p.x, 2) + pow(p.y, 2) + pow(p.z, 2));
	return distance;
}

int main()
{
	setlocale(LC_CTYPE, "polish");
	int x, y ,z;

	cout << "podaj x\n";
	cin >> x;
	cout << "podaj y\n";
	cin >> y;
	cout << "podaj z\n";
	cin >> z;

	cout << "Odleg³oœæ:  " << distanceFromCenter(x, y , z) << "\n"; 

	point firstPoint;
	firstPoint.x = 3;
	firstPoint.y = 5;
	firstPoint.z = 8;
	cout << "Odleg³oœæ:  " << distanceFromCenter(firstPoint.x, firstPoint.y, firstPoint.z) << "\n";
	cout << "Odleg³oœæ:  " << distanceFromCenter(firstPoint) << "\n";


}

