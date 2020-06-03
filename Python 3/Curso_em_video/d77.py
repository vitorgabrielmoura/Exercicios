tupla = ('XESQUEDELE', 'BRELELELE', 'DRAULISON', 'DALE', 'DELE')
vogais = 0
for n in tupla:
    print(f'\nNa palavra {n} temos ',end='')
    for vogal in n:
        if vogal in 'AEIOU':
            print(f'{vogal} ',end='')