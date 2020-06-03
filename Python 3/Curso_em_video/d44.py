a1 = float(input('Qual o valor do produto a ser comprado? R$:'))
a2 = int(input("""Digite o valor referente a opção desejada de pagamento:
[1] À vista no dinheiro/xeque
[2] À vista no cartão
[3] Em até 2x no cartão
[4] 3x ou mais no cartão\n"""))
if a2 == 1:
    print(f'O valor final do seu produto é {a1-(a1*0.10)}')
elif a2 == 2:
    print(f'O valor final do seu produto é {a1-(a1*0.05)}')
elif a2 == 3:
    print(f'O valor final do seu produto é {a1}')
else:
    print(f'O valor final do seu produto é {a1+(a1*0.20)}')
