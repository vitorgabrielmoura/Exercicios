idade = 0
maisvelho = 0
nomevelho = ''
menos20= 0
for c in range(1,5):
    a1 = input(f'\n\033[31mDigite seu nome\033[m').strip().upper()
    a2 = int(input('\033[35mDigite sua idade\033[m'))
    idade += a2
    a3 = str(input('\033[34mE qual seu sexo?\033[m')).strip().upper()
    print('--------------------------')
    if a3 == 'MASCULINO' and c ==1:
        nomevelho = a1
        maisvelho = a2
    if a3 == 'MASCULINO' and a2 > maisvelho:
        nomevelho = a1
        maisvelho = a2
    if a3 == 'FEMININO' and a2<20:
        menos20 += 1
print(f'A media de idade do grupo é {idade/2}')
print(f'O homem mais velho tem {maisvelho} anos e se chama {nomevelho}')
print(f'Existem {menos20} mulheres com menos de 20 anos')