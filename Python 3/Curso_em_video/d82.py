lista = []
while True:
    lista.append(int(input('Digite um número')))
    resp = str(input('Deseja continuar? [S/N]: ')).upper()
    if resp == 'N':
        break
print(f"""\nA lista completa é {[x for x in lista]}\nA lista de pares é {[x for x in lista if x % 2 == 0]}
A lista de ímpares é {[x for x in lista if x % 3 == 0]}""")