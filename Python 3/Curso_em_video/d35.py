print('='*30)
print('DÁ PRA FORMAR UM TRIÂNGULO?')
print('='*30)
a = float(input('Digite o comprimento de uma reta'))
b = float(input('Digite o comprimento de outra reta'))
c = float(input('Digite o comprimento de outra reta'))
if a < b+c and b < a+c and c <a+b:
    print('Dá pra formar um triângulo')
else:
    print('Não forma um triângulo')