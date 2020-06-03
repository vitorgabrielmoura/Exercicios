print('### RADAR ELETRÔNICO ###')
a1=float(input('Digite a velocidade do carro'))
a2=(a1-80.0)*7
print(f'Você foi multado em R${a2}' if a1 >= 80.0 else 'Tá safe')