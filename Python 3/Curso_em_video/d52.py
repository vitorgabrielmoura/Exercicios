print("""===============================
Identificador de números primos
===============================\n""")
sla = 0
a1 = int(input('\033[33mDigite o número inteiro a ser consultado'))
for c in range(1,a1 + 1):
    if a1%c == 0:
        sla += +1
if sla >2:
    print(f'{a1} não é primo, por que é divisível por {sla} números')
elif sla==2:
    print(f'{a1} é primo, por que é divisível por apenas 2 números (ele mesmo e 1)')
