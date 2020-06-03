from Curso_em_video.exercicios import moeda

a1 = float(input('Digite o preço: R$'))
print(f'A metade de {moeda.moeda(a1)} é {moeda.metade(a1,False)}')
print(f'O dobro de {moeda.moeda(a1)} é {moeda.dobro(a1,True)}')
print(f'Aumentando 10% de {moeda.moeda(a1)} é {moeda.aumentar(a1,10,True)}')
print(f'Reduzindo 13% de {moeda.moeda(a1)} é {moeda.diminuir(a1,13,True)}')