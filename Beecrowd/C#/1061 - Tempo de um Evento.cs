using System; 

public class Program {

  public static void Main(string[] args) {
    string[] dataIncial = Console.ReadLine().Split(' ');
    string[] horaIncial = Console.ReadLine().Split(':');
    string[] dataFinal = Console.ReadLine().Split(' ');
    string[] horaFinal = Console.ReadLine().Split(':');

    int diaInicial = int.Parse(dataIncial[1]);

    int diaI = diaInicial * 86400;
    int horaI = int.Parse(horaIncial[0]) * 3600;
    int minI = int.Parse(horaIncial[1]) * 60;
    int segundoI = int.Parse(horaIncial[2]);

    int horaexataInicio = diaI + horaI + minI + segundoI;

    int diaFinal = int.Parse(dataFinal[1]);
    int diaF = diaFinal * 86400;
    int horaF = int.Parse(horaFinal[0]) * 3600;
    int minF = int.Parse(horaFinal[1]) * 60;
    int segundoF = int.Parse(horaFinal[2]);

    int horaexataFinal = diaF + horaF + minF + segundoF;

    int duracao = horaexataFinal - horaexataInicio;

    int dias = duracao / 86400;
    int resdias = duracao % 86400;
    int horas = resdias/3600;
    int reshoras = resdias%3600;
    int minutos = reshoras/60;
    int segundos = reshoras%60;
    
    Console.WriteLine($"{dias} dia(s)");
    Console.WriteLine($"{horas} hora(s)");
    Console.WriteLine($"{minutos} minuto(s)");
    Console.WriteLine($"{segundos} segundo(s)");
  }
}