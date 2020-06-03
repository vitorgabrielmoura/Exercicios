from random import randint
from time import sleep
import sys

def delay_print(s):
    for c in s:
        sys.stdout.write(c)
        sys.stdout.flush()
        sleep(0.1)

def linha():
    print(f'{"-" * 60}')

def opcoes():
    print("""
[1] Charmander
[2] Squirtle
[3] Bulbassaur""")

class Pokemon:
    global string1attack
    global string2attack
    def __init__(self, name, types, moves, Evs, health= '===================='):
        self.name = name
        self.types = types
        self.moves = moves
        self.defense = Evs['DEFENSE']
        self.attack = Evs['ATTACK']
        self.health = health
        self.bars = 20

    def fight(self, Pokemon2):
        linha()
        print("------BATALHA POKEMON------")
        print(f'\n{self.name}')
        print(f'TIPO: {self.types}')
        print(f'Ataque: {self.attack}')
        print(f'Defesa:: {self.defense}')
        print(f'LVL: {3*((self.attack + self.defense)/2)}')
        print('\nVS')

        print(f'\n{Pokemon2.name}')
        print(f'TIPO: {Pokemon2.types}')
        print(f'Ataque: {Pokemon2.attack}')
        print(f'Defesa:: {Pokemon2.defense}')
        print(f'LVL: {3*((Pokemon2.attack + Pokemon2.defense)/2)}')

        sleep(2)

        version = ['Fogo', 'Água', 'Terra']
        string1attack = ' '
        string2attack = ' '
        for i, k in enumerate(version):
            if self.types == k:

                if Pokemon2.types == k:
                    string1attack = '\nNão é muito efetivo...'
                    string2attack = '\nNão é muito efetivo...'

                if Pokemon2.types == version[(i+1)%3]:
                    Pokemon2.attack *=2
                    Pokemon2.defense *= 2
                    self.attack /= 2
                    self.defense /=2
                    string1attack = '\nNão é muito efetivo...'
                    string2attack = '\nÉ muito efetivo!'

                if Pokemon2.types == version[(i+2)%3]:
                    self.attack *= 2
                    self.defense *= 2
                    Pokemon2.attack /= 2
                    Pokemon2.defense /= 2
                    string1attack = '\nÉ muito efetivo!'
                    string2attack = '\nNão é muito efetivo...'

        while (self.bars >0) and (Pokemon2.bars >0):
            print()
            linha()
            print(f'\n{self.name}\t\tVIDA\t{self.health}')
            print(f'{Pokemon2.name}\t\tVIDA\t{Pokemon2.health}\n')
            linha()

            print(f"Vai {self.name}!")
            print()
            for i, x in enumerate(self.moves):
                print(f'{i+1}.', x)
            movimento = int(input('Escolha um número:'))
            delay_print(f'{self.name} usou {self.moves[movimento-1]}!')
            sleep(1)
            delay_print(string1attack)

            Pokemon2.bars -= self.attack
            Pokemon2.health = ""


            for j in range(int(Pokemon2.bars+.1*Pokemon2.defense)):
                Pokemon2.health += "="

            sleep(1)
            print()
            linha()
            print(f'\n{self.name}\t\tHEALTH\t{self.health}')
            print(f'{Pokemon2.name}\t\tHEALTH\t{Pokemon2.health}\n')
            linha()
            sleep(1)

            if Pokemon2.bars <=0:
                delay_print(f"\n {Pokemon2.name} died.")
                break

            ########################################################3###
            #se o pokemon 2 n morreu agora é hora do pokemon 1 self jogar
            ###########################################################
            print(f"Vai {Pokemon2.name}!")
            for i, x in enumerate(Pokemon2.moves):
                print(f'{i + 1}.', x)
            movimento = int(input('Escolha um número:'))
            delay_print(f'{Pokemon2.name} usou {Pokemon2.moves[movimento - 1]}!')
            sleep(1)
            delay_print(string2attack)

            self.bars -= Pokemon2.attack
            self.health = ""

            for j in range(int(self.bars + .1 * self.defense)):
                self.health += "="

            sleep(1)
            print()
            linha()
            print(f'\n{self.name}\t\tVIDA\t{self.health}')
            print(f'{Pokemon2.name}\t\tVIDA\t{Pokemon2.health}\n')
            linha()
            sleep(1)

            if self.bars <= 0:
                delay_print(f"\n{self.name} morreu.")
                break

        dinheiro = randint(0,5000)
        delay_print(f'\nO oponente pagou a você R${dinheiro}')


#MAIN

charmander = Pokemon('Charmander', 'Fogo', ['Tackle', 'Scratch','Ember','Fire Punch'], {'ATTACK': 4, 'DEFENSE': 2})
squirtle = Pokemon('Squirtle', 'Água', ['Tackle', 'Bubblebeam','Headbutt','Surf'], {'ATTACK': 3, 'DEFENSE': 3})
bulbasaur = Pokemon('Bulbasaur', 'Terra', ['Tackle', 'Vine Wip','Razor Leaf','Leech Seed'], {'ATTACK': 3, 'DEFENSE': 2})


opcoes()
a1 = int(input("""\nCom qual pokemon deseja jogar?"""))
if a1 == 1:
    a1 = charmander
elif a1 == 2:
    a1 = squirtle
elif a1 == 3:
    a1 = bulbasaur
a2 = int(input("""Com quem será contra?"""))
if a2 == 1:
    a2 = charmander
elif a2 == 2:
    a2 = squirtle
elif a2 == 3:
    a2 = bulbasaur
a1.fight(a2)
