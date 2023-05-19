using System; 

public class Program {

  public static void Main(string[] args) {
    string[] valores = Console.ReadLine().Split(' ');

    int indice1 = int.Parse(valores[0]);
    int indice2 = int.Parse(valores[1]);
    int indice3 = int.Parse(valores[2]);
    
    int maior = indice1;

    if (indice2 >= maior){
      maior = indice2;}

    if (indice3 >= maior){
      maior = indice3;}
    
    Console.WriteLine($"{maior} eh o maior");
  }
}