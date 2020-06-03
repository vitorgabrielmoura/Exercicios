print('ESTOU DE RECUPERAÇÃO?')
a1=float(input('\nDigite sua primeira nota'))
a2=float(input('Digite sua segunda nota'))
if (a1+a2)/2 <5:
    print(f'\033[1;31mVocê está reprovado com nota final {(a1+a2)/2}')
elif (a1+a2)/2 >5 and (a1+a2)/2 <=6.9:
    print(f'\033[7;30mVocê está de recuperação com nota final {(a1+a2)/2}\033[m')
else:
    print(f'\033[1;32mParabéns! Você foi aprovado com nota final {(a1+a2)/2}')