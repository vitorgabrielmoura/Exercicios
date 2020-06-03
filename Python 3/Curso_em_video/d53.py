print('Sua frase é um palíndromo?\n')
a1 = input('Digite sua frase sem acento e pontuação').strip().upper()
a2 = ''.join(a1.split())
reverse = '' # n coloquei 0 pq é string
for c in range(len(a2) -1,-1, -1):
    reverse += a2[c]
if reverse == a2:
    print(f'Temos um palíndromo. {a2} ao contrário é {reverse}')
else:
    print(f'Não é um palíndromo. {a2} ao contrário é {reverse}')

#METODO MAIS FÁCIL:
#a1 = str(input(('Digite ')).upper().strip())
#frase = ''.join(a1.split())
#print(frase[::-1])