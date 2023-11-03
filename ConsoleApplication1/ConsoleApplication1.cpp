#include <iostream>
using namespace std;



void task1()
{
    int a;
    int h;
    cout << " podaj bok :  ";
    cin >> a;
    cout << " podaj wysokosc :  ";
    cin >> h;
    cout << (a / 2) * h;
 
    


}

void task2()
{
    int wiek;
    cout << " podaj wiek: ";
    cin >> wiek;
    if (wiek < 18)
    {
        cout << " jestes niepelnoletni";
    }
    else
    {
        cout << " jesteœ pelnoletni";
    }
}

void task3()
{
    int firstnumber;
    cout << " wprowadz  liczbe :   ";
    cin >> firstnumber;
    if (firstnumber > 15 && firstnumber <= 56)
    {
        cout << "ta liczba nalezy do przedzialu";
    }
    else
    {
        cout << " ta liczba nie nalezy";
    }
}

void task4()
{
    int ocena;
        cout << " wprowadz ocene:  ";
        cin >> ocena;

        switch (ocena)
        {
        case 1 :
            cout << "niedostateczny";
                break;

        case 2:
            cout << "dopuszczajacy";
                break;

        case 3:
            cout << "dostateczny";
                break;

        case 4:
            cout << "dobry";
                break;

        case 5:
            cout << "bardzo dobry";
                break;

        case 6:
            cout << "celujacy";
                break;

        default:

            cout << " to nie ocena";
        }
}

int main()
{
    task1();
    //task2();
    //task3();
    //task4();
}
