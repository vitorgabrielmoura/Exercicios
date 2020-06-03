import time
import pyautogui
print('\033[4;34mMatriz 3x3 by Vitu\033[m')

time.sleep(0)
matriz = [[], [], []]
a1 = int(input('\nDigite um valor para [0,0]: '))
matriz[0].append(a1)
a2 = int(input('Digite um valor para [0,1]: '))
matriz[0].append(a2)
a3 = int(input('Digite um valor para [0,2]: '))
matriz[0].append(a3)
a4 = int(input('Digite um valor para [1,0]: '))
matriz[1].append(a4)
a5 = int(input('Digite um valor para [1,1]: '))
matriz[1].append(a5)
a6 = int(input('Digite um valor para [1,2]: '))
matriz[1].append(a6)
a7 = int(input('Digite um valor para [2,0]: '))
matriz[2].append(a7)
a8 = int(input('Digite um valor para [2,1]: '))
matriz[2].append(a8)
a9 = int(input('Digite um valor para [2,2]: '))
matriz[2].append(a9)

print(f'{"-"*32}')
count = 0
for c in matriz:
    print(f"""[ {c[0]} ] [ {c[1]} ] [ {c[2]} ]""")

