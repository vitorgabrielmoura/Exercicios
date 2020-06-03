a1=float(input('Digite o valor do seu salário'))
if a1 > 1250:
    print(f'Seu salário com aumento totaliza R${(0.10*a1)+a1}')
else:
    print(f'Seu salário com aumento totaliza R${(0.15*a1)+a1}')