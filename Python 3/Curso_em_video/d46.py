import time
import playsound
a1 = input('Aperte qualquer tecla para começar a contagem')
for c in range (10,0,-1):
    print(c)
    time.sleep(1)
print('\n\033[31mFELIZ ANO NOVO!')
playsound.playsound('C:/Users/User/Documents/Python/MP3s python/Foguete.mp3')