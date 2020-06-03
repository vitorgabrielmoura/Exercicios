a1=str(input('Digite seu nome'))
a2=a1.split()
print(f"""O nome com todas as letras maísculas é: {a1.upper()}
O nome com todas as letras minúsculas é {a1.lower()}
Seu nome completo sem espaços tem {len(a1.replace(' ',''))} letras e 
o primeiro nome tem {len(a2[0])} letras.""")