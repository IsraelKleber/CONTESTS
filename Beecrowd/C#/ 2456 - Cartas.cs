using System;

public class Program {
  public static void Main (string[] args) {
  string[] cartas = Console.ReadLine().Split(' ');

    int cartaA = int.Parse(cartas[0]);
    int cartaB = int.Parse(cartas[1]);
    int cartaC = int.Parse(cartas[2]);
    int cartaD = int.Parse(cartas[3]);
    int cartaE = int.Parse(cartas[4]);

    if (cartaA > cartaB && cartaB > cartaC && cartaC > cartaD && cartaD > cartaE){
      Console.WriteLine("D");
    }
    else if (cartaA < cartaB && cartaB < cartaC && cartaC < cartaD && cartaD < cartaE){
      Console.WriteLine("C");
    }
    else{
      Console.WriteLine("N");
    }
  }
}