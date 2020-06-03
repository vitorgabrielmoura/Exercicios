dicio = dict()
dicio['nome'] = input('Nome:')
dicio['media'] = float(input(f'Média de {dicio["nome"]}'))
if dicio ['media'] >= 6:
    dicio['situação'] = 'Aprovado'
else:
    dicio['situação'] = 'Reprovado'

print(f"""O nome é igual a {dicio["nome"]}
Média é igual a {dicio["media"]}
Situação é igual a {dicio["situação"]}""")
