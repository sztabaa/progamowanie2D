using namespace std;
#include <iostream>

class C
{
protected:
    int fieldA;
    string name;
public:
    C()
    {
        fieldA = 15;
        name = "C";
    }

    C(int a , string n )
    {
        fieldA = a;
        name = n;
    }

    int getA()
    {
        return fieldA;
    }

    void shofInfo()
    {
        cout << "Informacja na temat klasy A" << "\n";
        cout << "Field A = " << fieldA << "\n";
    }

};

class A : public C
{
private:
    //int fieldA;


public:
    A()
    {
        fieldA = 5;
        name = "A";
    }

    A(int a, string n)
    {
        fieldA = a;
        name = n;
    }

    //int getA()
   // {
        //return fieldA;
  //  }

   /* void shofInfo()
    {
        cout << "Informacja na temat klasy A" << "\n";
        cout << "Field A = " << fieldA<<"\n";
    }*/
};

class B : public C
{
private:
    int fieldB;
   // int fieldA;

public:
    B()
    {
        fieldA = 5;
        fieldB = 3;
    }

   /* int getA()
    {
        return fieldA;
    }*/

    int getB()
    {
        return fieldB;
    }

   /* void shofInfo()
    {
        cout << "Informacja na temat klasy B" << "\n";
        cout << "Field A = " << fieldA << "\n";
        cout << "Field B = " << fieldB << "\n";
    }*/
};

int main()
{
    A a;

    B b;

    C c;
    //c.shofInfo();
}
