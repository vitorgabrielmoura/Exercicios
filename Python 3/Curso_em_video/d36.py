print('\033[31m='*30)
print('## CALCULADORA DE EMPRÉSTIMOS ##')
print('='*30)
casa=float(input('\033[mQual o valor da casa que você está financeando? R$:'))
salario=float(input('Qual o valor do seu salário? R$:'))
tempo=float(input('Em quantos anos você vai pagar?'))
mensal=tempo*12
if casa/mensal > 0.30*salario:
    print('Você não pode realizar esse empréstimo, seu salário não aguenta')
elif casa/mensal <= 0.30*salario:
    print('A sua prestação mensal é de R${:.2f}'.format(casa/mensal))