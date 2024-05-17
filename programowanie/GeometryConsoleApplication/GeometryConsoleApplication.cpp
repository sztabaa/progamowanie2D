using namespace std;
#include <iostream>
//napisz klasy które beda opisywac kwadrat prostok¹t i trapez

class Quadrangle
{
protected:
    double sideA, sideB, sideC, sideD, height;
public:
    Quadrangle(double firstSide,
        double secondSide,
        double thirdSide,
        double fourthSide,
        double h)
    {
        sideA = firstSide;
        sideB = secondSide;
        sideC = thirdSide;
        sideD = fourthSide;
        height = h;
    }

    double GetPerimeter()
    {
        return sideA + sideB + sideC + sideD;
    }
};

class Square : public Rectangle
{
protected:

public:
    Square(double side) :Rectangle(side, side)
    {
        //height = sideA = sideB = sideC = sideD = side;
    }

    double GetArea()
    {
        return sideA * sideB;
    }
};

class Rectangle : public Quadrangle
{
protected:

public:
    Rectangle(double firstSide, double secondSide) : Quadrangle(firstSide, secondSide, firstSide, secondSide, secondSide)
    {
        /* sideA = sideC = firstSide;
         height= sideB = sideD = secondSide;*/
    }

    double GetArea()
    {
        return sideA * sideB;
    }
};

class Trapeze : public Quadrangle
{
protected:

public:
    Trapeze(double firstSide,
        double secondSide,
        double thirdSide,
        double fourthSide,
        double h) : Quadrangle(firstSide, secondSide, thirdSide, fourthSide, h)
    {
        /* sideA = firstSide;
         sideB = secondSide;
         sideC = thirdSide;
         sideD = fourthSide;
         height = h;*/
    }

    double GetArea()
    {
        return  (sideA + sideC) * height / 2;
    }
};

//*Dla poni¿szych klas u³ó¿ drzewko dziedziczenia.

//zad 1

class Animal //     (Zwierzê)
{

};

//rodzaje
class Mamal :public Animal // (Ssak)
{

};

class Fish :public Animal // (Ryba)
{

};

class Reptitle :public Animal //(Gad)
{

};

class Bird :public Animal //(Ptak)
{

};


//ptak
class Eagle :public Bird  //(Orze³)
{

};

class Sparrow :public Bird // (Wróbel)
{

};


//ssak
class Tiger :public Mamal //(Tygrys)
{

};

class Dog :public Mamal // (Pies)
{

};

class Cat :public Mamal // (Kot)
{

};

class Lion :public Mamal //(Lew)
{

};

//ryby

class Salomon :public Fish // (£osoœ)
{

};

class Trout :public Fish //(Pstr¹g)
{

};

//gady
class Snake :public Reptitle // (W¹¿)
{

};

class Turtle :public Reptitle // (¯ó³w)
{

};


//zad2

class Vehicle //(Pojazd)
{

};

class Motorcycle :public Vehicle  //(Motocykl)
{

};

class Car :public Vehicle //(Samochód)
{

};

class Truck :public Vehicle //(Ciê¿arówka)
{

};

//samochód
class Sedan :public Car //(Sedan)
{

};

class SUV :public Car //(SUV)
{

};

class Pick_up :public Car //(Pick-up)
{

};

//ciezarówka

class Semi_truck :public Truck //(Ci¹gnik siod³owy)
{

};

//zad3

class Electronic_Device //(Urz¹dzenie elektroniczne)
{

};
//urzadenia

class Television :public Electronic_Device // (Telewizor)
{

};

class Smartphone :public Electronic_Device //(Smartfon)
{

};

class Laptop :public Electronic_Device //(Laptop)
{

};

//smartfony

class Iphone :public Smartphone //(iPhone)
{

};

class Android_device :public Smartphone //(Telefon z systemem Android)
{

};

//Telewiozry

class LED_TV :public Television //(Telewizor LED)
{

};

class Smart_TV :public Television //(Telewizor Smart)
{

};


int main()
{
    Quadrangle q(3, 2, 4, 5, 2);
    Square s(6);
    Rectangle r(10, 5);
    Trapeze t(10, 6, 4, 5, 3);
}
