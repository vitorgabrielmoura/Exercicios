def notas(*num, sit=False):
    """
    --> Função para calcular e mostrar informações das notas de alunos
    :param num: Notas que farão parte do cálculo
    :param sit: Mostra a situação ou não
    :return: Retorna um dicionário com todas as informações
    """
    dicio = dict()
    dicio["Total"] = len(num)
    dicio["Maior"] = max(num)
    dicio["Menor"] = min(num)
    dicio["Média"] = sum(num)/len(num)
    if sit:
        if dicio["Média"] < 6:
            dicio['Situacação'] = 'RUIM'
        elif 6 <= dicio["Média"] < 7:
            dicio['Situacação'] = 'RAZOÁVEL'
        else:
            dicio['Situacação'] = 'BOA'
    return dicio

resp = notas(5.5,9.5,10,6.5, sit=True)
print(resp)
print(f'{"~"*80}')
resp22 = notas(4.5,3,6.5, sit=True)
print(resp22)
print(f'{"~"*80}')
help(notas)