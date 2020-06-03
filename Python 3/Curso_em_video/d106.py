from time import sleep
def escreva(txt):
    print(f'{"~"*(len(txt)+4)}')
    print(f'{txt.center(len(txt)+4)}')
    print(f'{"~" * (len(txt)+4)}')


escreva('Sistema de ajuda PyHelp')
while True:
    a1 = input('Função ou biblioteca -> ').lower()
    if a1 == 'fim':
        break
    print(f'{"~" * 80}')
    print(f'\033[1;30;44mAcessando o manual do comando "{a1}"\033[m')
    print(f'{"~" * 80}')
    sleep(1)
    print(help(a1))
print('Até logo')