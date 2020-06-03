import time
from random import randint
import datetime
import string

numeros = [0,1,2,3,4,5,6,7,8,9]
numerosop = [1,2,3]


x = datetime.datetime.now()
data = x.day
mes = x.month
ano = x.year
horario = x.hour
minuto = x.minute

Corinthians = 'Corinthians', 'Mauro Boselli', 'Vagner Love', 'Yony Gonzáles', \
'Luan', 'M. Vital', 'Cantillo', 'Camacho', 'Fagner', 'Lucas Piton', 'Gil', 'Danilo Avelar'
Palmeiras = 'Palmeiras', 'Gustavo Gómez', 'Willian', 'Rony', 'Luiz Adriano', 'Dudu', \
'Felipe Melo', 'Diogo Barbosa', 'Marcos Rocha', 'Ramires', 'Bruno Henrique', 'Gustavo Scarpa'
Flamengo = 'Flamengo', 'Rodrigo Caio', 'Bruno Henrique', 'Gabigol', 'De Arrascaeta', 'Diego', \
'Everton Ribeiro', 'Willian Arão', 'Piris da mota', 'Filipe Luís', 'Rafinha', 'Thuler'

def opcoes():
    print("""\033[1;34m[1]\033[36m Jogar
\033[1;34m[2]\033[36m Histórico de partidas
\033[1;34m[3]\033[36m Deletar histórico
\033[1;34m[4]\033[36m Notas do desenvolvedor
\033[1;34m[5]\033[36m Sair do programa""")


def times():
    print("""\033[36mcod.   Time
\033[1;34m[1]\033[30m    Corinthians
\033[1;34m[2]\033[32m    Palmeiras
\033[1;34m[3]\033[31m    Flamengo (NEW!!)""")


def cabecalho(txt):
    print(f'\033[34m{"-" * 60}')
    print(f'{txt.center(60)}')
    print(f'{"-" * 60}\033[m')


def linha():
    print(f'\033[34m{"-" * 60}')


def jogo():
    print('\033[1;34mJogo em andamento', end='', flush=True)
    time.sleep(1)
    print('.', end='', flush=True)
    time.sleep(1)
    print('.', end='', flush=True)
    time.sleep(1)
    print('.', end='', flush=True)
    time.sleep(1)
    print('.', end='', flush=True)
    time.sleep(1)
    print()
    cabecalho('PLACAR FINAL')


def opcao1():
    cabecalho('TIMES')
    times()
    linha()
    time.sleep(2)

def erro(txt='ERRO. Digite uma opção válida.'):
    linha()
    print(f'\033[1;31m{txt}\033[m')
    linha()


def LeiaTime(txt):
    try:
        a1 = int(input(txt))
    except:
        erro('Digite um valor válido para time.')
    else:
        return a1

cabecalho('BRASILEIRÃO 2020 - QUARENTENA')

arquivo = 'tabela.txt'
lista = list()


# CRIAR O ARQUIVO .txt
try:
    a = open(arquivo, 'r')
except FileNotFoundError:
    a = open(arquivo, 'w+')
    a.close()

#INÍCIO DO PROGRAMA
cont = 0
while True:
    opcoes()
    try:
        opcao = int(input('\033[36mOpção: '))
    except:
        erro()
    else:
        if opcao == 1:
            opcao1()
            r1 = randint(0, 6)
            r2 = randint(0, 6)
            try:
                while True:
                    time1 = LeiaTime('\033[36mQuem joga em casa?: (Digite o código do time) ')
                    if time1 == 1 or time1 == 2 or time1 == 3:
                        break
                    else:
                        if time1 in numeros:
                            erro('Digite um código válido de time.')
            except:
                erro('Digite um código válido de time.')
            else:
                if time1 == 1:
                    ptime = Corinthians
                elif time1 == 2:
                    ptime = Palmeiras
                elif time1 == 3:
                    ptime = Flamengo
                try:
                    while True:
                        time2 = LeiaTime('\033[36mQual o adversário?: \033[m')
                        if time2 != time1 and time2 in numerosop:
                            break
                        elif time2 == time1:
                            erro('Erro. Times duplicados. Favor, selecione outro time.')
                except:
                    erro(f'ERRO. Digite um valor válido.')
                else:
                    if time2 == 1:
                        stime = Corinthians
                    elif time2 == 2:
                        stime = Palmeiras
                    elif time2 == 3:
                        stime = Flamengo
                    jogo()
                    placar = f'{ptime[0]} {r1} x {r2} {stime[0]}'
                    print(placar.center(60))
                    cont1 = 0
                    cont2 = 0
                    jogador1 = []
                    tempo1 = []
                    jogador2 = []
                    tempo2 = []
                    while cont1 != r1:
                        jogador1.append(ptime[randint(1, 11)])
                        tempo1.append(randint(0, 90))
                        tempo1.sort()
                        cont1 += 1
                    for c, v in enumerate(tempo1):
                        print(f"{jogador1[c]} - {v}'".rjust(30))
                    while cont2 != r2:
                        jogador2.append(stime[randint(1, 11)])
                        tempo2.append(randint(0, 90))
                        tempo2.sort()
                        cont2 += 1
                    for x, y in enumerate(tempo2):
                        print(f"{y:>34}' - {jogador2[x]}".ljust(1))
                    linha()
                    try:
                        a = open(arquivo, 'a')
                    except:
                        print('Ocorreu um erro ao abrir o arquivo.')
                    else:
                        a.write(f'\033[mDia {data}/0{mes} de {ano} as {horario}h e {minuto}min: {placar}\n')
                        a.close()
        elif opcao == 5:
            break
        elif opcao == 2:
            a = open(arquivo, 'r')
            cabecalho('HISTÓRICO DE PARTIDAS')
            for linhaa in a:
                print(linhaa)
                #print(linha.replace('\n',''))
            a.close()
            linha()
        elif opcao == 3:
            try:
                a = open(arquivo, 'w')
                a.close()
            except:
                linha()
                print('OPS. Não consegui deletar seu histórico :(')
                print(f'\033[1;33m{"-" * 60}')
            else:
                linha()
                print('\033[32mHistórico deletado com sucesso.')
                linha()
        elif opcao == 4:
            linha()
            print('\033[mObrigado por utilizar meu mini projeto! :D\nNovas funcionalidades e times serão '
                  'adicionadas com o tempo!\n\nAtualmente esse jogo está na versão \033[1;31m1.1\033[m')
            linha()
        else:
            erro()