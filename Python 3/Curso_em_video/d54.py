import datetime
x= datetime.datetime.now()
ano = x.year
maior = 0
menor = 0
for c in range(1,8):
    a1 = int(input(f'Digite o ano de seu nascimento, paciente número {c}'))
    if ano - a1 >= 21:
        maior += +1
    else:
        menor += +1
print(f'São {maior} pacientes maiores de idade e {menor} menores')