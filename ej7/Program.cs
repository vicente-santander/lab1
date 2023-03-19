using ej7.models;
string accion = string.Empty;

Car fastcar = new Car();
fastcar.fabricante = "susuki";
fastcar.modelo = "supra";
fastcar.año = 2002;
fastcar.porcentajeVelocidad = 60;
fastcar.porcentaManioabrabilidad = 35;

Car normal = new Car();

normal.fabricante = "Hyundai";
normal.modelo = "tuki";
normal.año = 1998;
normal.porcentajeVelocidad = 30;
normal.porcentaManioabrabilidad = 50;

Car slow = new Car();

slow.fabricante = "toyota";
slow.modelo = "tuki";
slow.año = 1800;
slow.porcentajeVelocidad = 10;
slow.porcentaManioabrabilidad = 90;

Console.WriteLine("Opciones:");
Console.WriteLine("");
Console.WriteLine("opcion 1");
fastcar.mostrar();
Console.WriteLine("");
Console.WriteLine("opcion 2");
normal.mostrar();
Console.WriteLine("");
Console.WriteLine("opcion 3");
slow.mostrar();

Console.WriteLine("Que auto va a utilizar?");
accion = Console.ReadLine()??"fin";
Console.WriteLine("");

if(accion == "1")
{
    Console.WriteLine("Has seleccionado:");
    fastcar.mostrar();
}
if(accion == "2")
{
    Console.WriteLine("Has seleccionado:\n");
    normal.mostrar();
}
if(accion == "3")
{
    Console.WriteLine("Has seleccionado:\n");
    slow.mostrar();
}