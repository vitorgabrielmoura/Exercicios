soma = opcao = 0
while opcao != 999:
    opcao = int(input('Digite um número ou digite 999 para parar'))
    if opcao != 999:
        soma += opcao
print(f'A soma de todos os números digitados foi {soma}')