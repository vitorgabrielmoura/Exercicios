print('10 PRIMEIROS TERMOS DE UMA PA\n')
raz = int(input('Digite a razão da sua PA'))
num = int(input('Digite o primeiro número da sua PA'))
for c in range(0,10):
    print((num)+c*raz,end=' > ')
print('Acabou')