sexo = 'A'
while sexo not in 'MF':
        sexo = input('Digite seu sexo [M/F]: ').upper()
        if sexo != 'M' and sexo !='F':
        #if sexo not in 'MF':
            print('Inválido. Digite novamente')
print('Acabou')