n1,n2,n3,n4 = map(float, input().split(" "))
media = (n1*2+n2*3+n3*4+n4*1)/10
print("Media: {:.1f}".format(media))
if (media < 5.0):
    print("Aluno reprovado.")
elif(media > 7.0):
    print("Aluno aprovado.")
else:
    print("Aluno em exame.")
    notafinal = float (input())
    mediafinal = (media + notafinal)/2
    print("Nota do exame: {:.1f}".format(notafinal))
    if (mediafinal < 5.0):
        print("Aluno reprovado.")
    else:
        print("Aluno aprovado.")
        print("Media final: {:.1f}".format(mediafinal))