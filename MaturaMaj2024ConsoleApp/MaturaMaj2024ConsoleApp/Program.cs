// Wczytujemy wszystkie linie z pliku "skrot_przyklad.txt" do tablicy stringów
var lines = File.ReadAllLines("skrot_przyklad.txt");

// Konwertujemy listę stringów na listę liczb całkowitych
List<int> numbersList1 = lines.Select(s => int.Parse(s)).ToList();
Console.WriteLine("zadanie 3.2");

// Funkcja filtrująca tylko nieparzyste cyfry z liczby
int FilterOddDigits(int value)
{
    int output = 0;
    while (value > 0)
    {
        int digit = value % 10;
        if (digit % 2 != 0)  // Sprawdzamy, czy cyfra jest nieparzysta
        {
            output = output * 10 + digit; 
        }
        value = value / 10;  
    }
    return output;
}

// Zmienna licząca liczby bez nieparzystych cyfr i największa liczba bez nieparzystych cyfr
int countOnlyEven = 0;
int maxOnlyEven = 0;


// Iterujemy po każdej liczbie w numbersList1
foreach (int val in numbersList1)
{
    if (FilterOddDigits(val) == 0)  
    {
        countOnlyEven++;  
        if (val > maxOnlyEven)  
        {
            maxOnlyEven = val;  
        }
    }
}


Console.WriteLine(countOnlyEven);
Console.WriteLine(maxOnlyEven);

// Zapisujemy wyniki do pliku
File.WriteAllText("wyniki3_2.txt", $"{countOnlyEven}\n{maxOnlyEven}");

// Wczytujemy wszystkie linie z pliku "skrot2_przyklad.txt" do tablicy stringów
var lines2 = File.ReadAllLines("skrot2_przyklad.txt");

// Konwertujemy dane z drugiego pliku na listę liczb
List<int> numbersList2 = lines2.Select(s => int.Parse(s)).ToList();
Console.WriteLine("zadanie 3.3");

// Funkcja obliczająca NWD (Największy Wspólny Dzielnik)
int GCD(int x, int y)
{
    while (y != 0)
    {
        int number = y;
        y = x % y;
        x = number;  
    }
    return x;  
}

// Filtrujemy liczby, które spełniają warunek: mają nieparzyste cyfry i NWD(n, nieparzyste cyfry) = 7
var filteredNumbers = numbersList2
    .Where(n => {
        int odd = FilterOddDigits(n);  
        return odd > 0 && GCD(n, odd) == 7;  
    })
    .ToList();

// Wypisujemy wyniki filtrowania
foreach (int item in filteredNumbers)
{
    Console.WriteLine(item);
}
