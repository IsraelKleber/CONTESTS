using System;

public class Program {
  public static void Main (string[] args) {
  string[] numeros = Console.ReadLine().Split(' ');
  string[] sorteados = Console.ReadLine().Split(' ');

    int numeroA = int.Parse(numeros[0]);
    int numeroB = int.Parse(numeros[1]);
    int numeroC = int.Parse(numeros[2]);
    int numeroD = int.Parse(numeros[3]);
    int numeroE = int.Parse(numeros[4]);
    int numeroF = int.Parse(numeros[5]);

    int acertos = 0;

  for (int i = 0; i < 6; i++){
    if (numeroA == int.Parse(sorteados[i]) || 
        numeroB == int.Parse(sorteados[i]) || 
        numeroC == int.Parse(sorteados[i]) || 
        numeroD == int.Parse(sorteados[i]) || 
        numeroE == int.Parse(sorteados[i]) || 
        numeroF == int.Parse(sorteados[i]) ){
        acertos += 1;
      }
    }

    switch (acertos) {
      case 3: Console.WriteLine("terno"); break;
      case 4: Console.WriteLine("quadra"); break;
      case 5: Console.WriteLine("quina"); break;
      case 6: Console.WriteLine("sena"); break;
      default: Console.WriteLine("azar"); break;
    }
  }
}