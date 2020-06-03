a1 = int(input('Digite um valor'))
a2 = int(input('Digite outro valor'))
a3 = int(input('Digite mais um valor'))
a4 = int(input('Digite o último valor'))
tupla = (a1,a2,a3,a4)
if 3 in tupla:
    aa = tupla.index(3)
    print(f"""Você digitou os valores {tupla}
    O valor 9 apareceu {tupla.count(9)} vezes
    O primeiro valor 3 foi digitado na posição nº {aa+1}
    e os números pares são """,end='')
    for n in tupla:
        if n%2 ==0:
            print(f'{n} ',end='')
else:
    print(f"""Você digitou os valores {tupla}
    O valor 9 apareceu {tupla.count(9)} vezes
    O valor 3 não foi digitado nenhuma vez
    e os números pares são """,end='')
    for n in tupla:
        if n%2 ==0:
            print(f'{n} ',end='')