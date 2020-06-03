raz = int(input('Digite a razão da sua PA'))
prim = int(input('Digite o primeiro termo da sua PA'))
pa = 0
qnt = 1
while qnt != 10:
    pa = (prim)+raz*qnt
    qnt = qnt + 1
    print(pa,end='')
    if qnt <10:
        print(' > ',end='')
    else:
        print(' = nada pq isso aqui é uma pa imbecil')