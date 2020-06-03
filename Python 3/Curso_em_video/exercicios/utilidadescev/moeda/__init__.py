def metade(x, form=False):
    res = x/2
    if form:
        return moeda(res)
    else:
        return res

def dobro(x, form=False):
    res = x*2
    if form:
        return moeda(res)
    else:
        return res

def aumentar(x, p, form=False):
    por = x + (x*(p/100))
    if form:
        return moeda(por)
    else:
        return por

def diminuir(x, p, form=False):
    dim = x - (x*(p/100))
    if form:
        return moeda(dim)
    else:
        return dim

def moeda(a, moeda = 'R$'):
    return f'{moeda}{a:.2f}'.replace('.',',')

def resumo(v, aum, dim):
    print(f'{"-" *40}')
    print('RESUMO DO VALOR'.center(40))
    print(f'{"-" * 40}')
    print(f"""Preço analisado: \t{moeda(v)}
Metade do preço: \t{moeda(metade(v))}
{aum}% de aumento: \t{moeda(aumentar(v,aum))}
{dim}% de redução: \t{moeda(diminuir(v,dim))}""")
    print(f'{"-" *40}')
