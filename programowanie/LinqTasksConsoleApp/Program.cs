﻿using LinqTasksConsoleApp;

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

//zadanie10
Console.WriteLine();
Console.WriteLine("Lista zadań z indeksami (zakończone zadania z numeracją)");
var listWithIndexTask = tasks.Where(p => p.IsCompleted).Select((p,index)=>);
foreach (var task in listWithIndexTask)
{
    Console.WriteLine(task);
}

