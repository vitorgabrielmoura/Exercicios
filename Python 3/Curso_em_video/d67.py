print('\033[4;33mTabuada 3.0 by Vitu Enterprises ™\033[m\n')

while True:
    num = int(input('Quer ver a tabuada de qual valor?'))
    if num < 0:
        break
    print(f"""--------------------------
{num} x 1 = {num*1}
{num} x 2 = {num*2}
{num} x 3 = {num*3}
{num} x 4 = {num*4}
{num} x 5 = {num*5}
{num} x 6 = {num*6}
{num} x 7 = {num*7}
{num} x 8 = {num*8}
{num} x 9 = {num*9}
{num} x 10 = {num*10}
-------------------------
""")
print('\n\033[4;33mTabuada encerrada. Obrigado por utilizar a Vitu Enterprises ')