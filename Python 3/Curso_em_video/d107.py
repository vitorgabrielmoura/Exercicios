from Curso_em_video.exercicios import moeda

a1 = float(input('Digite o preço: R$'))
print(f'A metade de {a1} é {moeda.metade(a1)}')
print(f'O dobro de {a1} é {moeda.dobro(a1)}')
print(f'Aumentando 10% de {a1} é {moeda.aumentar(a1, 10)}')
print(f'Reduzindo 13% de {a1} é {moeda.diminuir(a1, 13)}')