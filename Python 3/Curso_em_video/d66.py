print('\033[4;33mLeitor personalizado 1.0 by Vitu Enterprises ™\033[m\n')
count = 0
soma = 0
while True:
    pergunta = int(input('Digite qualquer número ou 999 para parar'))
    if pergunta == 999:
        break
    count += 1
    soma += pergunta
print(f'A soma dos {count} valores foi {soma}')