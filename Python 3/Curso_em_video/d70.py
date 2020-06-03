print('\n\033[4;33mSUPERMERCADO DO XESQUEDELE 3.0 by Vitu Enterprises™\033[m')

valor = maisdemil = cont = 0
maisbarato = []
nomebarato = ''
less = 0

while True:
    nome = input("""\n--------------------------------
Digite o nome do produto: """)
    preco = float(input("""Digite o preço do produto: R$"""))
    cont += 1
    valor += preco
    maisbarato += [preco]
    if cont == 1:
        less = preco
        nomebarato = nome
    else:
        if valor < less:
            nomebarato = nome
    if preco > 1000:
        maisdemil += 1
    a1 = input('Deseja registrar outro produto? [S/N]: ').upper()
    if a1 != 'S' and a1 != 'N':
        while a1 != 'S' and a1 != 'N':
            a1 = input('Deseja registrar outro produto? [S/N]: ').upper()
    if a1 == 'N':
        break
print(f'O total gasto com a compra é de R${valor} e {maisdemil} produtos custam mais de R$1.000, sendo o produto mais barato o(a) {nomebarato}, custando R${min(maisbarato)}')