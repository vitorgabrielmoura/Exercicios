lista = []
pos = 0
for c in range(0,6):
    a1 = int(input('Digite um valor'))
    if c ==0 or a1 > lista[-1]:
        lista.append(a1)
        print(f'{a1} adicionado ao final da lista')
    else:
        for p, v in enumerate(lista):
            if a1 < v:
                lista.insert(p, a1)
                print(f'{a1} adicionado a posição {p} da lista')
                break
print(lista)
