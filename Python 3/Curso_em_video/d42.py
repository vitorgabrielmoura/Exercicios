print('='*30)
print('DÁ PRA FORMAR UM TRIÂNGULO?')
print('='*30)
a = float(input('Digite o comprimento de uma reta'))
b = float(input('Digite o comprimento de outra reta'))
c = float(input('Digite o comprimento de outra reta'))
if a < b+c and b <a+c and c <a+b and a == b == c:
    print('Forma um triângulo Equilátero')
elif a < b+c and b <a+c and c <a+b and a != b and a !=c and b != c:
    print('Forma um triângulo Escaleno')
elif a < b+c and b < a+c and c <a+b:
    print('Dá pra formar um triângulo Isósceles')
else:
    print('Não forma um triângulo')
