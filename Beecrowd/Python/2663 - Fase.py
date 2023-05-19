n_comp = int(input())
classi_mini = int(input())
cassificados = 0
notas = []
notas_sem_rep = []

for i in range(0, n_comp):
    nota = int(input())
    notas.append(nota)
notas_sem_rep = sorted(set(notas))

for i in range(0, len(notas_sem_rep)):
    while (cassificados < classi_mini):
        if (notas.count(max(notas_sem_rep)) >= 2):
            cassificados += notas.count(max(notas_sem_rep))
            notas_sem_rep.remove(max(notas_sem_rep))

        elif (notas.count(max(notas_sem_rep)) == 1):
            if (cassificados < classi_mini):
                cassificados += 1
                notas_sem_rep.remove(max(notas_sem_rep))      
            else:
                break 
print(cassificados)