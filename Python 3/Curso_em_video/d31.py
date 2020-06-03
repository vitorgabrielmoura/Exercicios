print('### PREÇO DA PASSAGEM ###')
print('\n')
viagem=float(input('Quantos Km sua viagem totaliza?'))
curta=0.50*viagem
longa=0.45*viagem
print(f'O preço da viagem é R${curta}' if viagem <=200 else f'O preço da viagem é R${longa}')