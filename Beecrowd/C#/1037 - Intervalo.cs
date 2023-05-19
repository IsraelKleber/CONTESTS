using System;

public class Program {
  public static void Main (string[] args) {
    double pontoFlutuante = double.Parse(Console.ReadLine());

    if (pontoFlutuante >= 0 && pontoFlutuante <= 25.00) {
      Console.WriteLine("Intervalo [0,25]");
    }
    else if (pontoFlutuante > 25.00 && pontoFlutuante <= 50.00) {
      Console.WriteLine("Intervalo (25,50]");
    }
    else if (pontoFlutuante > 50.00 && pontoFlutuante <= 75.00) {
      Console.WriteLine("Intervalo (50,75]");
    }
    else if (pontoFlutuante > 75.00 && pontoFlutuante <= 100.00) {
      Console.WriteLine("Intervalo (75,100]");
    }
    else {
      Console.WriteLine("Fora de intervalo");
    }
  }
}