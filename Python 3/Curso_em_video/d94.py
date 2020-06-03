dicio = dict()
lista = []
qnt = 0
while True:
    dicio['Nome'] = input('Nome: ').capitalize()
    while True:
        dicio['Sexo'] = input('Sexo: [M/F]').upper()
        if dicio['Sexo'] in 'MF':
            break
    dicio['Idade'] = int(input('Idade: '))
    qnt += 1
    lista.append(dicio.copy())
    resp = ' '
    while resp not in 'SN':
        resp = input('Deseja continuar? [S/N]: ').upper()
    if resp == 'N':
        break

print(f'{"-="*40}')
print(f'-- O grupo tem {qnt} pessoas.')
print(f'-- As mulheres cadastradas foram',end=' ')
for m in lista:
    if m["Sexo"] == 'F':
        print(f'{m["Nome"]}' ,end= ' ')
soma = 0
for me in lista:
    if me["Idade"]:
        soma += me["Idade"]
media = soma/qnt
print()
print(f'-- A média de idade é de {media:.1f} anos')
print('-- Lista de pessoas que estão acima da média:')
for a in lista:
    if a["Idade"] > media:
        print()
        print(f'Nome = {a["Nome"]}; Sexo = {a["Sexo"]}; Idade = {a["Idade"]}')

print(f'{"-="*40}')
print('ENCERRADO')