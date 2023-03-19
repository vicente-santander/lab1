namespace ej7.models
{
    public class Car
    {
        public string fabricante = string.Empty;
        public string modelo = string.Empty;
        public int año;
        public int porcentajeVelocidad;
        public int porcentaManioabrabilidad;

        public void mostrar()
        {
            Console.WriteLine("Fabricante:{0}\nModelo:{1}\nAño:{2}\n%Velocidad:{3}\n%Manioabrabilidad:{4}",fabricante, modelo,año,porcentajeVelocidad,porcentaManioabrabilidad);
        }



    }
}