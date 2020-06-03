import datetime
x = datetime.datetime.now()
ano = x.year
print('\033[7;30mQual minha categoria na natação?\033[m')
a1 = int(input('Digite o ano em que você nasceu'))
idade = ano - a1
if idade <=9:
    print('Sua categoria é Mirim')
elif idade <=14:
    print('Sua categoria é Infantil')
elif idade <=19:
    print('Sua categoria é Júnior')
elif idade <=20:
    print('Sua categoria é Sênior')
else:
    print('Sua categoria é Master')