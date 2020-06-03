print('\033[1;40m### TABUADA 2.0 ###\033[m')
a1 = int(input('Digite o número que deseja ver a tabuada'))
for c in range(1,11):
    print(f'{a1}x', end='')
    print(c, end=' = ')
    print(a1*c)
