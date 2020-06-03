print('Acesse o desafio em https://www.urionlinejudge.com.br/judge/pt/problems/view/1171\n')
lista = list()
count = 0
while True:
    a1 = int(input('Digite a quantidade de números que deseja ler (max = 2000): '))
    if a1 < 2000:
        for c in range(1, a1 + 1):
                a2 = int(input(f'Digite o {c}º número'))
                if lista.count(a2) <= 20:
                    lista.append(a2)
    if a1 == c:
        break
lista.sort()
for v in lista:
    print(f'\n{v} aparece {lista.count(v)} vez(es)')
    if lista.count(v) > 1:
        for b in range(1,lista.count(v)):
            lista.remove(v)
