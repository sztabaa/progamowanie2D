using LinqConsoleApp;

List<Person> People = new List<Person>();

#region Uzupełnienie kolekcji

Person person = new Person();
person.Name = "Ewa";
person.Surname = "Kowalska";
person.Age = 32;

People.Add(person);

person = new Person();
person.Name = "Jan";
person.Surname = "Nowak";
person.Age = 12;

People.Add(person);

person = new Person();
person.Name = "Karol";
person.Surname = "Krawczyk";
person.Age = 200;

People.Add(person);

person = new Person();
person.Name = "Paweł";
person.Surname = "Stalin";
person.Age = 77;

People.Add(person);

person = new Person();
person.Name = "Paweł";
person.Surname = "Nowak";
person.Age = 5;

People.Add(person);

person = new Person();
person.Name = "Karol";
person.Surname = "Nowak";
person.Age = 23;

People.Add(person);

#endregion

Console.WriteLine("Główna kolekcja:");
/*for(int i = 0; i < People.Count; i++)
{
    Console.WriteLine($"Imię:  {People[i].Name} Nazwisko:  {People[i].Surname} wiek: {People[i].Age}" );
}
*/

foreach(Person p in People)
{
    Console.WriteLine($"Imię:  {p.Name} Nazwisko:  {p.Surname} wiek: {p.Age}");
};

//List<Person> sortedPeopleByAge = People.OrderBy(p => p.Age).ToList(); to też działa
var sortedPeopleByAge = People.OrderBy(p => p.Age);
Console.WriteLine("Kolekcja posortowana po wieku: ");
foreach(Person p in sortedPeopleByAge)
{
    Console.WriteLine($"Imię:  {p.Name} Nazwisko:  {p.Surname} wiek: {p.Age}");
}

 sortedPeopleByAge = People.OrderByDescending(p => p.Age);
Console.WriteLine("Kolekcja posortowana po wieku malejąco: ");
foreach (Person p in sortedPeopleByAge)
{
    Console.WriteLine($"Imię:  {p.Name} Nazwisko:  {p.Surname} wiek: {p.Age}");
}

Console.WriteLine();
int maxAge=People.Max(p=>p.Age);
Console.WriteLine($"Najstarsza osoba ma {maxAge} lat");
Console.WriteLine();

double avg=People.Average(p => p.Age);
Console.WriteLine($"Średni wiek to: {avg} lat");

Console.Clear();

List<Person>sortedPeople=People.OrderBy(p => p.Surname).ThenBy(p => p.Age).ToList();
Console.WriteLine("Kolekcja posortowana");
foreach(Person p in sortedPeople)
{
    Console.WriteLine($"Imię:  {p.Name} Nazwisko:  {p.Surname} wiek: {p.Age}"); 
}

Console.WriteLine();

List<Person>mixedPeople=People.OrderBy(p=> new Random().Next()).ToList();
Console.WriteLine("Kolekcja posortowana losowo");
foreach (Person p in mixedPeople)
{
    Console.WriteLine($"Imię:  {p.Name} Nazwisko:  {p.Surname} wiek: {p.Age}");
};

Console.WriteLine();

if (People.Any(p=>p.Age<18))
{
    Console.WriteLine("osoby są niepełnoletnie");
};

if(People.All(p=>p.Age>=18))
{
    Console.WriteLine("wszystkie osoby są pełnoletnie");
};

Console.WriteLine();

Person firstPerson=People.FirstOrDefault(p=>p.Name.Length==3);

if (firstPerson.Equals(default(Person))==false)
    {
    Console.WriteLine("osoba z imieniem większym niż trzy litery");
    Console.WriteLine($"{firstPerson.Name}");
}