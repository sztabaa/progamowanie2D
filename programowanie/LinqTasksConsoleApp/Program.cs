using LinqTasksConsoleApp;

var tasks = new List<TaskItem>
{
    new TaskItem(1, "Buy groceries", true),
    new TaskItem(2, "Clean the house", false),
    new TaskItem(3, "Pay bills", true),
    new TaskItem(4, "Study LINQ", false),
    new TaskItem(5, "Exercise", true)
};
//zadanie1
var trueTasks=tasks.Where(p=>p.IsCompleted==true);
Console.WriteLine("Zakonczone zdania");
foreach(var task in trueTasks)
{
    Console.WriteLine(task);
}
Console.WriteLine();
//zadanie 2
Console.WriteLine("pierwsze nie zakończone zdanie");
var firstFalse=tasks.First(p=> p.IsCompleted==false);
Console.WriteLine(firstFalse);
//zadanie3
Console.WriteLine();
var sortedTasks = tasks.OrderBy(p => p.Name);
Console.WriteLine("posortowane według nazwy");
foreach(var task in sortedTasks)
{
    Console.WriteLine(task);
}
//zadanie4
Console.WriteLine();
Console.WriteLine("ilość zakończonych zdań");
var countedTask = tasks.Count(p => p.IsCompleted == true);
Console.WriteLine(countedTask);

//zadanie 5
Console.WriteLine();
Console.WriteLine("nazwy zdań");
var taskNames = tasks.Select(p => p.Name);
foreach(var task in taskNames)
{
    Console.WriteLine(task);
}

//zadanie6
Console.WriteLine();
Console.WriteLine("Znalezienie nazw zakończonych zadań posortowanych według długości nazwy");
var endTasksFalse = tasks.Where(p => p.IsCompleted == true).OrderBy(p => p.Name.Length).Select(p=>p.Name);
foreach(var task in endTasksFalse )
{
    Console.WriteLine(task);
}


//zadanie7
Console.WriteLine();
Console.WriteLine(" Zadania pogrupowane według stanu zakończenia, a następnie posortowane w grupach według nazwy");
var groupTask = tasks.OrderBy(p => p.IsCompleted).ThenBy(p => p.Name);
foreach (var task in groupTask)
{
    Console.WriteLine(task);
}

//zadanie8
Console.WriteLine();
Console.WriteLine("Najkrótsza nazwa zadania niezakończonego");
var shortTask = tasks.Where(p=>p.IsCompleted==false).OrderBy(p => p.Name.Length).Select(p=>p.Name).FirstOrDefault();
Console.WriteLine(shortTask);

//zadanie9
Console.WriteLine();
Console.WriteLine("Ilość liter w nazwach wszystkich zakończonych zadań");
var countTask=tasks.Where(p=>p.IsCompleted==true).Select(p=>p.Name.Length).Sum();
Console.Write(countTask);

//Zadanie 10: Lista zadań z indeksami (zakończone zadania z numeracją)
Console.WriteLine();
Console.WriteLine("Zadanie 10");

var x = tasks.Where(t => t.IsCompleted);
for (int i = 0; i < x.Count(); i++)
{
    Console.WriteLine($"{i + 1}:");
    Console.WriteLine(x.ElementAt(i));
}




//Zadanie 11: Zadania z najdłuższą nazwą w każdej grupie zakończonych i niezakończonych

/*
var groupTasks = tasks.GroupBy(t => t.IsCompleted);
foreach (var group in groupTasks)
{
    Console.WriteLine($"Grupa zakończona: {group.Key}");
    var maxName = group.OrderByDescending(t => t.Name.Length).First().Name;
    Console.WriteLine($"Najdłuższa nazwa w grupie: {maxName}");
}
*/
Console.WriteLine();
Console.WriteLine("Zadanie 11");
var groupTasks = tasks.GroupBy(t => t.IsCompleted)
    .Select(g => new { GroupVaule = g.Key, MaxName = g.OrderByDescending(t => t.Name.Length).First().Name });
foreach (var group in groupTasks)
{
    Console.WriteLine(group);
}

//Zadanie 12: Zlicz, ile zadań w każdej grupie zakończonych i niezakończonych zawiera słowo „the” w nazwie
Console.WriteLine("Zadanie 12");

var countTrueAndFalse = tasks.GroupBy(p => p.IsCompleted).Select(g => new{GroupValue=g.Key,Count= g.Where(t => t.Name.Contains("the")).Count()});
foreach(var count in countTrueAndFalse)
{
    Console.WriteLine(count);
}


//Zadanie 13: Utwórz listę zakończonych zadań z ich numeracją oraz długością nazw

Console.WriteLine();
Console.WriteLine("Zadanie 13");
var completedTasks = tasks.Where(t => t.IsCompleted).Select((t, index) => new{
 TaskNumber = index + 1,  TaskName = t.Name,NameLength = t.Name.Length  });    
foreach (var task in completedTasks)
{
    Console.WriteLine($"Task #{task.TaskNumber}: {task.TaskName}, Length of name: {task.NameLength}");
}


//Zadanie 14: Zadania posortowane według stanu zakończenia, a następnie alfabetycznie według nazw

//Zadanie 15: Sprawdź, czy w nazwach wszystkich zadań są co najmniej 2 różne samogłoski

var lettersTask = tasks.All(t => t.Name.ToLower().Where(c => "aeiouy".Contains(c)).Distinct().Count() >= 2);

//Zadanie 16: Znajdź wszystkie unikalne litery używane w nazwach zadań zakończonych

