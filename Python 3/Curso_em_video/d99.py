from time import sleep
def maior(*num):
    lista = []
    for c in num:
        lista.append(c)
    print(f"""Analisando os valores passados... 
Entre {lista} são a todos {len(lista)}
O maior valor foi {max(lista)} """)

def maiorv2(*numm):
    maior = cont = 0
    print('Analisando os valores passados...')
    for x, v in enumerate(numm):
        if x ==0:
            maior = v
        if v > maior:
            maior = v
        print(v,end=' ', flush=True)
        sleep(0.3)
        cont += 1
    print(f"""Foram informados {cont} valores ao todo
O maior valor é {maior}""")


maior(0,5,55)
print()
maiorv2(6,4,2,6,7)
