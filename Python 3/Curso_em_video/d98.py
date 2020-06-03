from time import sleep

input()
def contagem(i,f,p):
    if f > i:
        print(f'{"-=" * 30}')
        if p == 0:
            p =1
        print(f'Contagem de {i} até {f} pulando de {p} em {p}')
        for c in range(i,f+1,p):
            print(c,end =' ', flush=True)
            sleep(0.3)
        print('FIM!')
    else:
        print(f'{"-=" * 30}')
        if p == 0:
            p =1
        if p <0:
            p *= -1 # isso aqui so inverte o sinal
        print(f'Contagem de {f} até {i} pulando de {p} em {p}')
        for x in range(i,f-1,-p):
            print(x,end =' ', flush=True)
            sleep(0.3)
        print('FIM!')

contagem(1,10,1)
contagem(10,0,2)
print(f'{"-=" * 30}')
print('Agora é sua vez de personalizar a contagem!')
ini = int(input('Início: '))
fim = int(input('Fim: '))
pas = int(input('Passo: '))
contagem(ini,fim,pas)
