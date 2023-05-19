using System;

public class Program {
  public static void Main (string[] args) {
    double tempoGasto = double.Parse(Console.ReadLine());
    double velocidadeMedia = double.Parse(Console.ReadLine());

    double distancia = velocidadeMedia * tempoGasto;
    double quantidadeLitros = distancia/12;

    Console.WriteLine($"{quantidadeLitros:0.000}");
  }
}