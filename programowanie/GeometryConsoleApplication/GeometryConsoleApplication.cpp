using namespace std;
#include <iostream>
//napisz klasy które beda opisywac kwadrat prostok¹t i trapez

class Quandrangle
{
protected:
    double sideA, sideB, sideC, sideD , height;
public:

};

class square: public Quandrangle
{
protected:

public:
    square(double side)
    {
        sideA = sideB = sideC = sideD = side;
       
    }
};

class rectrangle:public Quandrangle
{
protected:

public:
    rectrangle(double firstSide , double secondSide)
    {
        sideA = sideC = firstSide;
        height= sideB = sideD = secondSide;
    }
};

class trapeze:public Quandrangle
{
protected:

public:
    trapeze(double firstSide, double secondSide , double thirdSide, double fourthSide , double h)
    {
        sideA = firstSide;
        sideB = secondSide;
        sideC = thirdSide;
        sideD = fourthSide;
        height= h;
    }
};


int main()
{
    rectrangle r(10 , 5);

    square s(6);

    trapeze t(10 , 6 , 4 , 5 , 3);
}

