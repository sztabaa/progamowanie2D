 
using namespace std;
#define _USE_MATH_DEFINES
#include <iostream>


//Program obliczaj�cy �redni� arytmetyczn� dw�ch liczb
void task1()
{
    //double a;
    //double b;

    //cout << "Podaj a: ";
    //cin >> a;

    //cout << "Podaj b : ";
    //cin >> b;

    //double avarageOfNumbers = (a + b) / 2;
    //cout << "wynik to:" << avarageOfNumbers ;
}
//Program obliczaj�cy pole prostok�ta
void task2()
{
    //float a;
    //float b;
    //cout << "napisz dlugosc boku a:  ";
    //    cin >> a;
    //    cout << "napisz dlugosc boku b:  ";
    //    cin >> b;  
    //    cout << "Pole prostokata wynosi :  ";
    //    cout << (a * b);
      


}
//Program obliczaj�cy obj�to�� sto�ka.
void task3()
{
    float a;
   float b;
    cout << " podaj promien:  ";
    cin >> a;
    cout << "podaj wysokosc:  ";
    cin >> b;
    float volume = 1.0 / 3 * M_PI * (pow(a, 2)) * b;
    cout << "objetosc stozka wynosi :  ";
    cout << volume;

}

//Program obliczaj�cy pole ko�a.
void task4()
{
    //float a;
    //cout << " podaj promien:  ";
    //cin >> a;
    //float area = M_PI * (pow(a, 2));
    //cout << "pole wynosi:  " << area ;

}
//Program obliczaj�cy warto�� wyra�enia a ^ 2 + b ^ 2
void task5()
{
    float a;
    float b;
    cout << "napisz a:  ";
    cin >> a;
    cout << "napisz b:  ";
    cin >> b;
    float rownanie = (pow(a, 2)) * (pow(b, 2));
        cout << "wynik to :  " << rownanie;
}
//Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
void task6()
{
    float b;
    float h;
    cout << "podaj b :    ";
    cin >> b;
    cout << "podaj h :    ";
    cin >> h;
    float area = b * (h / 2.0);
    cout << " pole wynosi :   " << area;
}


int main()
{
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    task6();
}
