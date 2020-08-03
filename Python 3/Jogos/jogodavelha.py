def mostratabela(tabela):
    for c, v in enumerate(tabela):
        for x in v:
            print(x, end=' ')
        print()


def verificajogo(tabela, simbolo, jogador):
    if tabela[0][0] == simbolo and tabela[0][1] == simbolo and tabela[0][2] == simbolo:
        return jogador
    elif tabela[1][0] == simbolo and tabela[1][1] == simbolo and tabela[1][2] == simbolo:
        return jogador
    elif tabela[2][0] == simbolo and tabela[2][1] == simbolo and tabela[2][2] == simbolo:
        return jogador

    if tabela[0][0] == simbolo and tabela[1][0] == simbolo and tabela[2][0] == simbolo:
        return jogador
    elif tabela[0][1] == simbolo and tabela[1][1] == simbolo and tabela[2][1] == simbolo:
        return jogador
    elif tabela[0][2] == simbolo and tabela[1][2] == simbolo and tabela[2][2] == simbolo:
        return jogador

    if tabela[0][0] == simbolo and tabela[1][1] == simbolo and tabela[2][2] == simbolo:
        return jogador
    elif tabela[0][2] == simbolo and tabela[1][1] == simbolo and tabela[2][0] == simbolo:
        return jogador

    return 0

tabela = [['-','-','-'],
          ['-','-','-'],
          ['-','-','-']]
i = 1

while True:
    jog = 1
    if i % 2 == 0:
        jog = 2

    mostratabela(tabela)
    print(f"Vez do jogador {jog}")
    linha = int(input("Digite a linha: "))
    coluna = int(input("Digite a coluna: "))

    simb = 'X'
    if jog == 2:
        simb = 'O'
    try:
        if tabela[linha][coluna] == '-':
            tabela[linha][coluna] = simb
        else:
            i += 1
    except (IndexError, ValueError):
        print(f'Erro! Valor digitado ou intervalo não suportado!')

    if verificajogo(tabela, simb, jog):
        print(f'O jogo acabou! Jogador {jog} venceu')
        break

    i += 1


mostratabela(tabela)