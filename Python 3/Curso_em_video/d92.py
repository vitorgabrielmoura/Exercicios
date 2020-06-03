dicio = {}
import datetime
x = datetime.datetime.now()
ano = x.year
dicio['Nome'] = input('Nome: ')
dicio['Idade'] = ano-(int(input('Ano de nascimento:')))
dicio['CTPS'] = int(input('Carteira de trabalho: (0 não tem) '))
if dicio['CTPS'] == 0:
    for k, v in dicio.items():
        print(f'{k} tem o valor {v}')
else:
    dicio['Contratação'] = int(input('Ano de contratação: '))
    dicio['Salário'] = float(input('Salário: '))
    dicio['Aposentadoria'] = (dicio['Contratação'] + 35) -  (x.year - dicio['Idade'])
    print()
    for k, v in dicio.items():
        print(f'{k} tem o valor {v}')