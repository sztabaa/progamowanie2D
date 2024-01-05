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

void task3()
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

    int sum = 0;
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        sum = sum + numbers[i];
    }

    double average = sum + 1.0 / SIZE_OF_ARRAY;
    cout << "Srednia liczb to" << average << "\n";
}

void task4()
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

        //wersja 1
        for (int numberFromRange = LOWER_RANGE; numberFromRange <= UPPER_RANGE; numberFromRange++)
        {
            int numberOfOccurences = 0;
            for (int j = 0; j < SIZE_OF_ARRAY; j++)
            {
                if (numbers[i] == numberFromRange)
                {
                    numberOfOccurences++;
                }
                cout << "Liczba" << numberFromRange << "wystapila" << numberOfOccurences << "razy\n";
            }
        }
}

int main()
{
   // task1();
    //task3();
    task4();
}

