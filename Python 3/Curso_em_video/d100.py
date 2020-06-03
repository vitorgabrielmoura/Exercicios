from time import sleep
from random import randint
def escreva(txt):
    for n in txt:
        print(n,end='', flush=True)
        sleep(0.20)



def sorteia(listaqualquer):
    print('Sorteando 5 valores: ')
    for c in range(0,5):
        listaqualquer.append(randint(0,10))
    for x in lista:
        print(x, end=' ', flush=True)
        sleep(0.3)
    print('FOI!')



def SomaPar(listaqualquer):
    par = 0
    for k in listaqualquer:
        if k%2 ==0:
            par += k
    print(f'A soma de todos os valores pares foi {par}')



#escreva('Sorteando números By Vitu')
lista =[]
sorteia(lista)
SomaPar(lista)