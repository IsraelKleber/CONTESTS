using System;

public class Program {
  public static void Main (string[] args) {

    int cedulas = int.Parse(Console.ReadLine());
    int cedulas100 = cedulas/100;
    int res100 = cedulas%100;
    int cedulas50 = res100/50;
    int res50 = res100%50;
    int cedulas20 = res50/20;
    int res20 = res50%20;
    int cedulas10 = res20/10;
    int res10 = res20%10;
    int cedulas5 = res10/5;
    int res5 = res10%5;
    int cedulas2 = res5/2;
    int res2 = res5%2;
    int cedulas1 = res2/1;
    int res1 = res2%1;
    
    Console.WriteLine (cedulas);
    Console.WriteLine ($"{cedulas100} nota(s) de R$ 100,00");
    Console.WriteLine ($"{cedulas50} nota(s) de R$ 50,00");
    Console.WriteLine ($"{cedulas20} nota(s) de R$ 20,00");
    Console.WriteLine ($"{cedulas10} nota(s) de R$ 10,00");
    Console.WriteLine ($"{cedulas5} nota(s) de R$ 5,00");
    Console.WriteLine ($"{cedulas2} nota(s) de R$ 2,00");
    Console.WriteLine ($"{cedulas1} nota(s) de R$ 1,00");
  }
}