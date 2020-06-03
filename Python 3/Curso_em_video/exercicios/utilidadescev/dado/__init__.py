def leiaDinheiro(txt):
    from string import punctuation
    while True:
        num = input(txt).replace(',','.').strip()
        if num.strip() == '' or num.isalpha() == True or num in punctuation:
            print(F'\033[1;31mERRO: "{num}" é um preco inválido!\033[m')
        else:
            return float(num)

