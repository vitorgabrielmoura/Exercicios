import datetime

x = datetime.datetime.now()


def voto(ano):
    idade = x.year - ano
    if 65 >= idade >= 18:
        return f'Com {idade} anos: VOTO OBRIGATÓRIO!'
    elif 16 <= idade <18 or idade > 65:
        return f'Com {idade} anos: VOTO OPCIONAL'
    else:
        return f'Com {idade} anos: NÃO VOTA'

a1 = int(input('Em que ano você nasceu?'))
print(voto(a1))
