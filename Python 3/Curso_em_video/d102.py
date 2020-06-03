def fatorial(n, show=False):
    """
    --> Calcula fatorial de um número.
    :param n: O número a ser calculado.
    :param show: Se mostra ou não a conta.
    :return: Resultado do fatorial
    """
    f = 1
    for c in range(n, 0, -1):
        f *= c
        if show == True:
            if c > 1:
                print(f'{c} x ', end='')
            else:
                print(f'{c} = ',end='')
    return f


print(fatorial(5))
print(fatorial(5, show=True))
