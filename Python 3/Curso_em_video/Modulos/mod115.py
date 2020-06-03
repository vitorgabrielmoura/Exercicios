def leiaInt(txt):
    while True:
        try:
            num = int(input(txt).strip())
        except (TypeError, ValueError):
            print('\033[1;31mERRO. DIGITE UM NÚMERO INTEIRO VÁLIDO.\033[m')
            continue
        except KeyboardInterrupt:
            print('O usuário preferiu não informar os dados')
            return 0 # era pra funcionar...
        else:
            return num

def linha():
    print(f'{"-"*42}')

def cabecalho(txt):
    linha()
    print(txt.center(42))
    linha()

def menu(lista):
    cabecalho('MENU PRINCIPAL')
    c = 1
    for opc in lista:
        print(f'{c} - {opc}')
        c += 1
    linha()
    perg = leiaInt('Digite sua opção: ')
    return perg

def arquivoExiste(arq):
    try:
        a = open(arq, 'rt')
        a.close()
    except FileNotFoundError:
        return False
    else:
        return True

def criarArquivo(arq):
    a = open(arq, 'wt+') # w de write e o + pra criar caso n tenha
    a.close()

def lerArquivo(arq):
    try:
        a = open(arq, 'rt') # r de read
    except:
        print('Erro ao ler o arquivo')
    else:
        cabecalho('PESSOAS CADASTRADAS')
        for linha in a:
            dado = linha.split(';')
            dado [1] = dado[1].replace('\n','')
            print(f'{dado[0]:<30}{dado[1]:>3} anos')
    finally:
        a.close()
def cadastrar(arq, nome='desconhecido', idade=0):
    try:
        a = open(arq, 'a') # a de append
    except:
        print('Houve um erro.')
    else:
        try:
            a.write(f'{nome};{idade}\n')
        except:
            print('Houve um erro na hora de escrever os dados.')
        else:
            print(f'Registro de {nome} adicionado com sucesso')
            a.close()