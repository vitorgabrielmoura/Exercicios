import datetime
print('PRECISO ME ALISTAR??\n')
date = datetime.datetime.now()
data = date.year
a1 = int(input('Digite o ano em que você nasceu'))
if data - a1 == 18:
    print('É hora de se alistar')
elif data - a1 >18:
    print('Já passou do tempo de se alistar')
else:
    print(f'Ainda falta {18-(data-a1)} ano(s) para o alistamento')


