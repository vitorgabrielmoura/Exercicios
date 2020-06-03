import string

num = string.digits
baixa = string.ascii_letters.split("z")[0] + "z"
alta = string.ascii_letters.split("z")[1]
caracter = string.punctuation
print(caracter)

condicoes = [False, False, False, False, False, False]
print2 = ['Senha inválida. Não possui números',
          'Senha inválida. Não possui letra alta.',
          'Senha inválida. Não possui letra baixa',
          'Senha inválida. Possui caracteres especiais.',
          'Senha inválida. Possui espaços',
          'Senha inválida. Sua senha não possui a quantidade de caracteres desejados.'
          ]

print('Acesso ao desafio em https://www.urionlinejudge.com.br/judge/pt/problems/view/2253\n')
print("""A senha deve conter, no mínimo, uma letra maiúscula, uma letra minúscula e um número;
A mesma não pode ter nenhum caractere de pontuação, acentuação ou espaço;
Além disso, a senha pode ter de 6 a 32 caracteres.""")
while True:
    texto = str(input('\n\033[31mDigite sua senha: ')).strip()

    condicoes[0] = True in [x in num for x in texto]
    condicoes[1] = True in [x in alta for x in texto]
    condicoes[2] = True in [x in baixa for x in texto]
    condicoes[3] = not True in [x in caracter for x in texto]
    condicoes[4] = not " " in texto
    condicoes[5] = not (len(texto) < 6 or len(texto) > 32)

    for condicao, msg in zip(condicoes, print2):
        if not condicao:
            print(msg)
        break