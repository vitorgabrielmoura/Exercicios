print('LEITOR DE IMC')
a1 = float(input('\nDigite sua altura em m (ex: 1.70):'))
a2 = float(input('Digite seu peso em Kg:'))
imc = a2/(a1*a1)
if imc <=18.5:
    print(f'Seu IMC é {imc}. Você está abaixo do peso.')
elif imc <=25:
    print(f'Seu IMC é {imc}. Você está com peso ideal.')
elif imc <=30:
    print(f'Seu IMC é {imc}. Você está acima do peso')
elif imc <=40:
    print(f'Seu IMC é {imc}. Você está Obeso')
else:
    print(f'Seu imc é {imc}. Você está com obesidade mórbida')