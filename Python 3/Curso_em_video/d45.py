import emoji
import random
import time
a1= input(emoji.emojize("""\033[30m########################\033[m
\033[7;30mPedra, Papel ou Tesoura?\033[m
\033[30m########################\033[m\n"""))
a3 = a1.upper()
a2 = random.choice(['PEDRA', 'PAPEL', 'TESOURA'])
print('\nJO')
time.sleep(1)
print('KEN')
time.sleep(1)
print('PO\n')
time.sleep(1)
if a3 == 'TESOURA' and a2 == 'PAPEL' or a3 == 'PAPEL' and a2 == 'PEDRA' or a3 == 'PEDRA' and a2 == 'TESOURA':
    print(f'\033[1;34mVocê ganhou.\033[m O computador escolheu {a2}. {a3} ganha de {a2}.')
elif a2 == a3:
    print(f'\033[1;32mVocê empatou.\033[m O computador escolheu {a2}. {a3} empata com {a2}.')
else:
    print(f'\033[1;31mVocê perdeu.\033[m O computador escolheu {a2}. {a3} perde para {a2}.')