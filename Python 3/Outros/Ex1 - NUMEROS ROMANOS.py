print('Acesso ao desafio: https://www.w3resource.com/python-exercises/class-exercises/\n')

class Conversor:
    def __init__(self, num=0, rom = ' '):
        self.num = num
        self.rom = rom

    def converter_romano(self):
        global pos
        dec = [1,4,5,9,10,40,50,90,100,400,500,900,1000]
        rom = ['I','IV','V','IX','X','XL','L','XC','C','CD','D','CM','M']
        total = self.num
        numromano = ''
        totalprov = 0
        while True:
            totalprov = total
            if total == 1:
                numromano += rom[0]
                print(f'{self.num} em algarismos romanos é {numromano}')
                break
            elif total == 0:
                print(f'{self.num} em algarismos romanos é {numromano}')
                break
            dec.append(total)
            dec.sort()
            if dec.count(total) > 1:
                pos = dec.index(total)
            else:
                pos = dec.index(total) - 1
            numromano += rom[pos]
            totalprov = total
            total = total - dec[pos]
            dec.remove(totalprov)

print('CONVERSOR')
print()
while True:
    a1 = int(input("""Qual número você deseja converter? (Digite 0 para parar)
> """))
    if a1 == 0:
        break
    Conversor(a1).converter_romano()