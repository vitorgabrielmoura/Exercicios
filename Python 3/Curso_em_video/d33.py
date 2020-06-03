a1=float(input('Digite um número'))
a2=float(input('Digite outro número'))
a3=float(input('Digite outro número'))
if a1<a2 and a1<a3:
    menor=a1
if a2<a1 and a2<a3:
    menor=a2
if a3<a1 and a3<a2:
    menor=a3
maior=a1
if a2>a3 and a2>a1:
    maior=a2
if a3>a2 and a3>a1:
    maior=a3
print(f'O maior número é {maior} e o menor é {menor}')
# OUTRA OPÇÃO:
#lista=[a1,a2,a3]
#print(f'O maior valor é {max(lista)} e o menor foi {min(lista)}')

#OUTRA OPÇÃO V2
#lista_ordenada=sorted(lista)
#print('O menor número é {}'.format(lista_ordenada[0]))