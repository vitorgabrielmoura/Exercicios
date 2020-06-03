from pygame import *
import random
import time
import pyautogui
a1 = ''

mixer.init()
sound = mixer.Sound('Resources/Musica.wav')
sound.set_volume(0.12)
sound.play()
sound2 = mixer.Sound('Resources/Errouu.wav')
sound2.set_volume(0.5)
sound3 = mixer.Sound('Resources/Acertou.wav')
sound3.set_volume(0.5)

while mixer.music.get_busy():
    time.Clock().tick(10)

print(f"""\n\033[7;30m=============================================================================================================\033[m
\033[7;30m{'JOGO DA ADIVINHAÇÃO 2.0':^}\033[m
\033[7;30m=============================================================================================================\033[m""")
numero = random.randint(0,100)
tentativas = 1
a1 = 0
a2 = 0
sopnparar = ''
a1 = int(input('\n\033[34mEu sou o Vitu, sua inteligênia artificial. Eu pensei em um número de 0 a 100 nesse momento. Qual seu palpite?: '))
if a1 == numero:
    print('Será se você acertou?')
    time.sleep(1)
    print('\n3')
    time.sleep(1)
    print('2')
    time.sleep(1)
    print('1 E.....\n')
    time.sleep(1)
    print('Você acertou na tentativa número 1! UAU!')
else:
    while a1 != numero:
        if a1 < numero:
            print('Será se você acertou?')
            time.sleep(1)
            print('\n3')
            time.sleep(1)
            print('2')
            time.sleep(1)
            print('1 E.....\n')
            time.sleep(1)
            sound2.play()
            a1 = int(input('ERROU!!!!! Maior que isso... tente denovo '))
            tentativas += 1
        else:
            print('Será se você acertou?')
            time.sleep(1)
            print('\n3')
            time.sleep(1)
            print('2')
            time.sleep(1)
            print('1 E.....\n')
            time.sleep(1)
            sound2.play()
            a1 = int(input('ERROU!!!!! Menor que isso... tente denovo '))
            tentativas += 1
    print('Será se você acertou?')
    time.sleep(1)
    print('\n3')
    time.sleep(1)
    print('2')
    time.sleep(1)
    print('1 E.....\n')
    time.sleep(1)
print(f'\nACERTOU!!!! \n \nO jogo acabou!Você venceu! Foram necessárias \033[35m{tentativas}\033[31m tentativas para isso!')
sound3.play()
time.sleep(2)
a1 = str(input('\nParar a música? S/N: ')).upper()
if a1 == 'S':
    mixer.music.stop()
elif a1 == 'N':
    print('Aproveita o som :D')
while sopnparar != 'PARA':
    sopnparar= str(input('♫'))

