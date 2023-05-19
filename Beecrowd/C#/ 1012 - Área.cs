using System;

public class Program {
  public static void Main (string[] args) {
    string[] ABC = Console.ReadLine().Split(' ');

    double A = double.Parse(ABC[0]);
    double B = double.Parse(ABC[1]);
    double C = double.Parse(ABC[2]);
    
    const double pi = 3.14159;

    double areaTrianguloRet = (A * C) / 2;
    double areaCirculo = pi * (C * C);
    double areaTrapezio = ((A + B) * C)/2;
    double areaQuadrado = B * B;
    double areaRetangulo = A * B;

    Console.WriteLine($"TRIANGULO: {areaTrianguloRet:0.000}");
    Console.WriteLine($"CIRCULO: {areaCirculo:0.000}");
    Console.WriteLine($"TRAPEZIO: {areaTrapezio:0.000}");
    Console.WriteLine($"QUADRADO: {areaQuadrado:0.000}");
    Console.WriteLine($"RETANGULO: {areaRetangulo:0.000}");
  }
}