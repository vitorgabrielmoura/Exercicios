print('### LEITOR DE ANO BISSEXTO ###')
a1=int(input('Digite um ano qualquer'))
if a1%4==0 and a1%100 !=0 or a1%400==0: #o '!=' significa diferente
    print(f'O ano de {a1} é bissexto')
else:
    print(f'O ano de {a1} não é bissexto')