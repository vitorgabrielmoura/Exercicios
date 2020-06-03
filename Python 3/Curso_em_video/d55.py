lista = []
for c in range(1,6):
    a1 = float(input(f'Digite seu peso, paciente número {c}'))
    lista += [a1]
print(f'\nO maior peso foi {max(lista)}')
print(f'O menor peso foi {min(lista)}')