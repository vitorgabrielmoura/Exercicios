a1=int(input('\033[30m Digite um número inteiro'))
a2=int(input(' Digite outro número inteiro\033[m'))
if a1>a2:
    print(f'O primeiro valor é maior ({a1} é maior que{a2}) ')
elif a2>a1:
    print(f'O segundo valor é maior ({a2} é maior que {a1})')
else:
    print('Os dois valores são iguais')
