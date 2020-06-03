import urllib.request

print('O site pudim.com.br está acessível?\n')

try:
    page = urllib.request.urlopen(("http://pudim.com.br/")) # eu defini a variavel (page) mas nem precisa, só se eu for usar o page.read() pra obter o código do site inteiro
except:
    print('\033[1;31mO site do pudim não está disponível no momento :(\033[m')
else:
    print('\033[1;32mO site do pudim está acesssível! :D\033[m')
