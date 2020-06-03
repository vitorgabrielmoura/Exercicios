lista = []
temp = []
while True:
    temp.append(input('Digite o nome do aluno: ').capitalize())
    temp.append(float(input('Nota 1: ')))
    temp.append(float(input('Nota 2: ')))
    lista.append(temp[:])
    temp.clear()
    resp = ' '
    while resp not in 'SN':
        resp = input('Quer continuar? [S/N]: ').upper()
    if resp == 'N':
        break

print(f'{"-="*20}')
print(f'{"No.":<4}{"Nome":<10}{"Média":>8}\n')
for p, v in enumerate(lista):
    print(f'{p+1:<4}{v[0]:<10}{(v[1]+v[2])/2:>8.1f}')
print(f'\n{"-="*20}')
while True:
    resp2 = input('Deseja mostrar as notas de qual aluno?: (Digite "Nenhum" para sair) ').upper()
    for c in lista:
        if resp2 == c[0].upper():
            print(f'As notas de {c[0]} são: {c[1]} e {c[2]}')
    if resp2 == 'NENHUM':
        break