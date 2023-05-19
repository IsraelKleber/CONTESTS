using System;

public class Program {
  public static void Main (string[] args) {
    string[] cumprimentoDistancia = Console.ReadLine().Split(' ');
    string[] quilometroPedagio = Console.ReadLine().Split(' ');

    int cumprimento = int.Parse(cumprimentoDistancia[0]);
    int distancia = int.Parse(cumprimentoDistancia[1]);
    int quilometro = int.Parse(quilometroPedagio[0]);
    int pedagio = int.Parse(quilometroPedagio[1]);

    int valordaViagem = (cumprimento/distancia)*pedagio + cumprimento*quilometro;

    Console.WriteLine(valordaViagem);
  }
}