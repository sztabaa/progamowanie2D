using namespace std;
#include <iostream>
void task1()
{
    const int UPPER_RANGE = 10;
    const int LOWER_RANGE = 5;

    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];

    srand(time(NULL));

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
    }

    for (int i = SIZE_OF_ARRAY - 1; i >= 0; i--)
    {
        cout << numbers[i] << ", ";
    }

    //szukanie maksimum
    int max = numbers[0];
    for (int i = 1; i < SIZE_OF_ARRAY; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    //szukanie minimum
    int min = numbers[0];
    for (int i = 1; i < SIZE_OF_ARRAY; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    cout << "Najwieksza liczba to:   " << max << "\n";
    cout << "Najmniejsza liczba to:   " << min << "\n";
}

int main()
{
    task1();
}

