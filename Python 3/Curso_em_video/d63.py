print('Sequência de Fibonacci')
n1 = 0
n2 = 1
a1 = int(input('\nDigite o número de valores que deseja ver na sequência\n'))
print(f'{n1} -> {n2}',end=' -> ')
cont = 3
while cont <= a1:
    n3 = n1 + n2
    print(n3,end=' -> ')
    n1 = n2
    n2 = n3
    cont = cont +1
print('Fim')