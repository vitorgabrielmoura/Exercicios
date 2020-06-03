print('\033[4;33mLeitor diferenciado 2.0 by Vitu Enterprises™\033[m\n')
idade = 0
homens = 0
menos20 = 0
while True:
    try:
        a1 = int(input("""------------------------------------
Qual a sua idade?"""))
    except:
        print('ERRO. Digite um valor válido.')
        continue
    if a1 > 18:
        idade += 1
    while True:
        a2 = input('Qual seu sexo? [M/F]: ').upper()
        if a2 not in 'MF':
            print('Erro. Digite uma opção válida.')
            continue
        break
    if a2 == 'M':
        homens += 1
    if a1 < 20 and a2 == 'F':
        menos20 += 1
    while True:
        a3 = input("""------------------------------------
Deseja registrar uma nova pessoa? [S/N]: """).upper()
        if a3 not in 'SN':
            continue
        break
    if a3 == 'N':
        break
print(f"""\nO número de pessoas com mais de 18 anos é {idade} e foram registrados {homens} homens ao total, e {menos20} mulher(s) possuem menos de 20 anos.""")
print('\n\n\033[4;33mObrigado por utilizar a Vitu Enterprises™')