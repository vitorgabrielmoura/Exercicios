import random
import time
count = 0

print('\033[4;33mPar ou Impar 1.0 by Vitu Enterprises ™\033[m\n')
while True:
    num = random.randint(1, 10)
    a1 = int(input('\033[35mEu sou o \033[1;31mVitu\033[35m, sua inteligência artificial. Digite um número para começar: '))
    a2 = input('E agora? Escolhe par ou Impar? [P/I]: ').upper()
    if a2 != 'P' and 'I':
        while a2 != 'P' and a2!= 'I':
            a2 = input('Par ou Impar? [P/I]: ').upper()
    total = a1+num
    par = total%2 == 0
    print('\n3')
    time.sleep(1)
    print('2')
    time.sleep(1)
    print('1 e......')
    time.sleep(1)
    if total%2==0:
        print(f"""\n--------------------------------------------------------------------------------------
O computador jogou {num} e você jogou {a1}. O total deu {total}, ou seja, PAR!!
--------------------------------------------------------------------------------------
""")
    else:
        print(f"""\n--------------------------------------------------------------------------------------
O computador jogou {num} e você jogou {a1}. O total deu {total}, ou seja, IMPAR!!
--------------------------------------------------------------------------------------
""")
    if a2 in 'P' and par == True:
        count +=1
        print('\033[34mVocê venceu. Vamos jogar de novo?\033[m')
    elif a2 in 'I' and par == False:
        count += 1
        print('\n\033[34mVocê venceu. Vamos jogar de novo?\033[m')
    else:
        print(f'\033[31mGame over. Você venceu \033[1;34m{count}\033[31m vezes')
        break
print('\n\033[4;33mFim de jogo. Obrigado por utilizar a Vitu Enterprises')