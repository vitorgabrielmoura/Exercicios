print('\033[4;33mLeitor personalizado 1.0 by Vitu Enterprises ™\033[m\n')

pergunta = 'S'
a1 = 0
soma = 0
count = 0
lista = []

while pergunta != 'N':
    a1 = int(input('Digite um número inteiro'))
    soma += a1
    count += 1
    lista = lista + [a1]
    if count >=2:
        pergunta = (input('Deseja continuar a digitar valores? [S/N]: ')).upper()
print(f'A média entre esses valores foi {soma/count} e o maior e menor valor digitado foi, respectivamente, {max(lista)} e {min(lista)} ')
print('\n\033[4;33mObrigado por utilizar a Vitu Enterprises ™')