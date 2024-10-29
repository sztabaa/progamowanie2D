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