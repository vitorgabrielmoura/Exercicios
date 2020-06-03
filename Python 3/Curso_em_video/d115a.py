from Curso_em_video.Modulos.mod115 import *
from time import sleep

arquivo = 'sistema.txt'

if not arquivoExiste(arquivo):
    criarArquivo(arquivo)

while True:
    resp = menu(['Ver pessoas cadastradas', 'Registrar pessoas', 'Sair do programa'])
    if resp == 1:
        lerArquivo(arquivo)
    elif resp == 2:
        cabecalho('NOVO CADASTRO')
        nome = str(input('Nome:'))
        idade = leiaInt('Idade:')
        cadastrar(arquivo, nome, idade)
        sleep(2)
    elif resp == 3:
        break
    else:
        print('\033[31mValor não encontrado. Digite um valor válido.\033[m')
        sleep(1)
