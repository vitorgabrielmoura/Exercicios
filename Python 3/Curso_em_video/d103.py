def ficha(n, g):
    if n == '':
        n = '<desconhecido>'
    if g == '':
        g = 0
    print(f'O jogador {n} marcou {g} gols no campeonato')

nome = input('Nome do jogador: ')
gols = input('Número de gols: ')
ficha(nome,gols)