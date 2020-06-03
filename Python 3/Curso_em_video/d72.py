número = ('Zero', 'Um', 'Dois', 'Três', 'Quatro', 'Cinco', 'Seis', 'Sete', 'Oito', 'Nove', 'Dez', 'Onze', 'Doze', 'Treze', 'Quatorze', 'Quinze', 'Dezesseis', 'Dezessete', 'Dezoito', 'Dezenove', 'Vinte')
a1 = int(input('Digite um número entre 0 e 20'))
while a1 < 0 or a1 > 20:
    a1 = int(input('Valor incorreto. Digite um número entre 0 e 20'))
a2 = a1 -1
print(f'Você digitou o número {número[a1]}')