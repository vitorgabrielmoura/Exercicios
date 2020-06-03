from Curso_em_video.exercicios import moeda

a1 = float(input('Digite o preço: R$'))
print(f'A metade de {moeda.moeda(a1)} é {moeda.moeda(moeda.metade(a1))}')
print(f'O dobro de {moeda.moeda(a1)} é {moeda.moeda(moeda.dobro(a1))}')
print(f'Aumentando 10% de {moeda.moeda(a1)} é {moeda.moeda(moeda.aumentar(a1,10))}')
print(f'Reduzindo 13% de {moeda.moeda(a1)} é {moeda.moeda(moeda.diminuir(a1,13))}')