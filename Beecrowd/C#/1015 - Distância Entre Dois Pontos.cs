using System;

public class Program {
  public static void Main (string[] args) {
    string[] p1 = Console.ReadLine().Split(' ');
    string[] p2 = Console.ReadLine().Split(' ');

    double x1 = double.Parse(p1[0]);
    double y1 = double.Parse(p1[1]);
    double x2 = double.Parse(p2[0]);
    double y2 = double.Parse(p2[1]);

    double distancia = Math.Sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    Console.WriteLine($"{distancia:0.0000}");
  }
}