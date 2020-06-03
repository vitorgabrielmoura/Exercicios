import time
from random import randint

import string

def linha():
    print(f'{"-"*60}')
def cabecalho(txt):
    linha()
    print(txt.center(60))
    linha()
def criarLista(txt,list):
    num = len(txt)
    pos = 0
    while True:
        list.append("_")
        pos += 1
        if pos == num:
            break

def leiaLetra(txt):
    while True:
        a1 = str(input(txt)).strip()
        if a1 in string.ascii_letters:
            return a1
        else:
            print('\033[1;31mERRO. Digite uma letra.\033[m')

def ArquivoExiste(txt):
    try:
        a = open(txt, 'r')
        a.close()
        return True
    except FileNotFoundError:
        return False

def CriarArquivo(txt):
    a = open(txt, 'wt+')
    a.close()

def lerArquivo(txt):
    try:
        a = open(txt, 'r')
    except:
        print('Erro ao ler o arquivo')
    else:
        print(a.read())


def adicionar(arq, lista):
    a = open(arq, 'a')
    for pala in lista:
        a.write(f'{pala};\n')
    a.close()


listaa = ['banana', 'janela',
'paralelepipedo', 'biblia', 'teclado', 'computador']
listaaa = []
count = 0
cabecalho('JOGO DA FORCA')
erro = 0
arquivo = 'palavras.txt'
if not ArquivoExiste(arquivo):
    CriarArquivo(arquivo)

a = open(arquivo, 'r')
for linha in a:
    a1 = linha.strip().split(';')
    listaaa.append(a1)
a.close()

palavra = listaaa[randint(0,5)]

lista = list()
criarLista(palavra[0], lista)

while True:
    print('\n\nJogando...')
    time.sleep(2)
    a1 = leiaLetra(f'Qual letra você escolhe? Minha palavra contém {len(palavra[0])} letras!').lower()
    pos = 0
    for letra in palavra[0]:
        pos += 1
        if letra == a1:
            print()
            print(f'Encontrei a letra {letra} na posição {pos}',end =' ---> ')
            lista.insert(pos-1, letra)
            lista.pop(pos)
            for c in lista:
                print(c,end='')
    if a1 not in lista:
        erro += 1
        print(f'Você errou. Restam {len(palavra[0]) - erro} tentativas')
    if len(palavra[0]) - erro == 0:
        print(f'\nVocê perdeu o jogo. A palavra era {palavra[0].capitalize()}')
        print("    _______________         ")
        print("   /               \        ")
        print("  /                 \       ")
        print("//                   \/\    ")
        print("\|   XXXX     XXXX   | /    ")
        print(" |   XXXX     XXXX   |/     ")
        print(" |   XXX       XXX   |      ")
        print(" |                   |      ")
        print(" \__      XXX      __/      ")
        print("   |\     XXX     /|        ")
        print("   | |           | |        ")
        print("   | I I I I I I I |        ")
        print("   |  I I I I I I  |        ")
        print("   \_             _/        ")
        print("     \_         _/          ")
        print("       \_______/            ")
        break
    if "_" not in lista:
        print('\n\nVocê ganhou :D')
        print("       ___________      ")
        print("      '._==_==_=_.'     ")
        print("      .-\\:      /-.    ")
        print("     | (|:.     |) |    ")
        print("      '-|:.     |-'     ")
        print("        \\::.    /      ")
        print("         '::. .'        ")
        print("           ) (          ")
        print("         _.' '._        ")
        print("        '-------'       ")
        break