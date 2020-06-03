lista = []
count = 0
resp = ' '
while resp not in 'N':
    a1 = int(input('Digite um número'))
    lista.append(a1)
    count += 1
    resp = str(input('Quer continuar a digitar valores? [S/N]: ')).upper()

lista.sort(reverse=True)
if 2 in lista:
    print(f'Foram ditados {count} números, sendo esses {lista} e o valor 5 não faz parte da lista')
else:
    print(f'Foram ditados {count} números, sendo esses {lista} e o valor 5 faz parte da lista!')