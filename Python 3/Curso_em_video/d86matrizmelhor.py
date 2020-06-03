matriz = [[0,0,0], [0,0,0], [0,0,0]]
for l in range(0,3):
    for c in range(0,3): #ele repete esse aqui 3 vezes ai so dps o for la em cima vai voltar, dando certinho a parada da matriz
        matriz[l][c] = int(input(f'Digite o número da posição [{l},{c}]'))
print(f'{"-"*32}')
for c in matriz:
    print(f"""[ {c[0]} ] [ {c[1]} ] [ {c[2]} ]""")
#ou então:
print('\n')
for l in range(0,3):
    for c in range(0,3):
        print(f'[{matriz[l][c]:^5}]',end=' ')
    print() # dps q o for de baixo fizer 3 vezes, esse print vai quebrar a linha pra começar dnv