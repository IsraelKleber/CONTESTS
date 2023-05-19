using System;

public class Program {
  public static void Main (string[] args) {
  string[] valoresInteiros = Console.ReadLine().Split(' ');

    int primeiroValor = int.Parse(valoresInteiros[0]);
    int segundoValor = int.Parse(valoresInteiros[1]);
    int terceiroValor = int.Parse(valoresInteiros[2]);

    if (primeiroValor > segundoValor && segundoValor > terceiroValor && primeiroValor > terceiroValor){
    Console.WriteLine(terceiroValor);
    Console.WriteLine(segundoValor);
    Console.WriteLine(primeiroValor);}
    else if (primeiroValor > segundoValor && segundoValor < terceiroValor && primeiroValor > terceiroValor){
    Console.WriteLine(segundoValor);
    Console.WriteLine(terceiroValor);
    Console.WriteLine(primeiroValor);}
    else if (primeiroValor < segundoValor && segundoValor < terceiroValor){
    Console.WriteLine(primeiroValor);
    Console.WriteLine(segundoValor);
    Console.WriteLine(terceiroValor);}
    else if (primeiroValor < segundoValor && segundoValor > terceiroValor && primeiroValor > terceiroValor){
    Console.WriteLine(terceiroValor);
    Console.WriteLine(primeiroValor);
    Console.WriteLine(segundoValor);}
    else if (primeiroValor < terceiroValor && terceiroValor < segundoValor){
    Console.WriteLine(primeiroValor);
    Console.WriteLine(terceiroValor);
    Console.WriteLine(segundoValor);}
    else if (primeiroValor < terceiroValor && terceiroValor > segundoValor && primeiroValor > segundoValor){
    Console.WriteLine(segundoValor);
    Console.WriteLine(primeiroValor);
    Console.WriteLine(terceiroValor);}
    Console.WriteLine();
    Console.WriteLine(primeiroValor);
    Console.WriteLine(segundoValor);
    Console.WriteLine(terceiroValor);
  }
}