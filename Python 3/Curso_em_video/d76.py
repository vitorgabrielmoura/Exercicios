print(f"""{'-'*40}
           LISTAGEM DE PREÇOS
{'-'*40}""")
tupla = ('Lápis', 1.75, 'Borracha', 2.00, 'Caderno', 15.90, 'Estojo', 25.00)
for pos, n in enumerate(tupla):
    if (pos+1)%2 !=0:
        print(f'{n}.......................',end='')
    else:
        print(f' R${n}')
print(f"""{'-'*40}""")