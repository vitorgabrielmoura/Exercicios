def area(a,b):
    art = a*b
    print(f'A área do seu terreno {a}x{b} é de {art}m²')


while True:
    largura = float(input('Largura: '))
    comp = float(input('Comprimento: '))
    area(largura,comp)
    resp = ' '
    while resp not in 'SN':
        resp = input('Deseja continuar? [S/N]').upper()
    if resp == 'N':
        break