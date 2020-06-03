import playsound
import random
print('\033[34;41m=\033[m'*31)
print('\033[1;34;41m### JOGO DA ADIVINHAÇÃO 1.0 ###\033[m')
print('\033[34;41m=\033[m'*31)
a1=random.randint(0,5)
escolha=int(input('\033[1;30;41mTente adivinhar o número entre\033[m \n\033[1;30;41m          e 5 que irei sortear'))
if escolha == a1:
    print('\033[4;32mParabéns, você acertou!')
    playsound.playsound('C:/Users/User/Documents/Python/MP3s python/Palmas.mp3')
else:
    print('\033[4;31mVocê errou!')
    playsound.playsound('C:/Users/User/Documents/Python/MP3s python/Errou.mp3')