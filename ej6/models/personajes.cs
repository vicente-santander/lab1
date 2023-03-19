namespace ej6.models
{
    public class Pj 
    {
        public string tipo = string.Empty;
        public string nombre = string.Empty;
        public int vida;
        public int poder;
        public int velocidad;

        public void descansar ()
        {
            vida++;
            Console.WriteLine("su vida actual aumento en 1 ahora tiene {0} vidas",vida);
            
        }

        public void atacar()
        {
            Console.WriteLine("ataca al enemigo");
        }
        public void cargar()
        {
            Console.WriteLine("carga su hechizo");
        }


    }
}