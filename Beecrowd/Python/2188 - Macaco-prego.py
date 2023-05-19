n_regioes = -1
teste = 1
while (n_regioes != 0):
   n_regioes = int(input())
   if (n_regioes == 0):
      break
   xx = -10000
   xxx = 10000
   yy = 10000
   yyy = -10000
   for i in range(1, n_regioes+1):
      X1, Y1, X2, Y2 = map(int, input().split())
      #0, 6, 8, 1 = map(int, input().split())
      if (X1 > xx):
         xx = X1 # xx = 0
      if (X2 < xxx):
         xxx = X2 # X2 = 0
      if (Y1 < yy):
         yy = Y1 # yy = 6
      if (Y2 > yyy):
         yyy = Y2 # yyy = 1
   if xx > xxx or yy < yyy:
      print("Teste {:d}\nnenhum\n".format(teste))
   else:
      print("Teste {:d}\n{:d} {:d} {:d} {:d}\n".format(teste, xx, yy, xxx, yyy))
   teste = teste + 1