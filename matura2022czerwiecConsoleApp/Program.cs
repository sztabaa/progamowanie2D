var strNumbers = File.ReadAllLines("przyklad.txt").ToList();

//Zadanie 4.1
var reverseDovidedBy17 = strNumbers
    .Where(s => int.Parse(string.Join("", s.Reverse())) % 17 == 0)
    .Select(s => string.Join("", s.Reverse()));

Console.WriteLine("Zdanie 4.1:");
foreach (var strNumber in reverseDovidedBy17)
    Console.WriteLine(strNumber);

//Zadanie 4.2
Console.WriteLine("Zdanie 4.2:");

string strMaxNumber = "";
int maxDiff = int.MinValue;
foreach (var strNumber in strNumbers)
{
    int dif = Math.Abs(int.Parse(strNumber) - int.Parse(string.Join("", strNumber.Reverse())));
    if (dif > maxDiff)
    {
        maxDiff = dif;
        strMaxNumber = strNumber;
    }
}

Console.WriteLine($"{strMaxNumber} {maxDiff}");

strMaxNumber = strNumbers.OrderBy(s => Math.Abs(int.Parse(s) - int.Parse(string.Join("", s.Reverse())))).Last();
maxDiff = Math.Abs(int.Parse(strMaxNumber) - int.Parse(string.Join("", strMaxNumber.Reverse())));

Console.WriteLine($"{strMaxNumber} {maxDiff}");

//Zadanie 4.4
Console.WriteLine("Zdanie 4.4:");
var groupedNumbers = strNumbers.GroupBy(s => s).ToList();

int differentNumbers = groupedNumbers.Count();
int sameNumberTwoTimes = groupedNumbers.Count(g => g.Count() == 2);
int sameNumberThreeTimes= groupedNumbers.Count(g => g.Count() == 3);

Console.WriteLine($" Ilość różnych liczb:{differentNumbers}\n liczba która powtórzyła sie dwa razy:{sameNumberTwoTimes}\n liczba która powtórzyła sie trzy razy:{sameNumberThreeTimes}");
