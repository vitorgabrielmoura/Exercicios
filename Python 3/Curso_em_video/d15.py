old=float(input('You rented your car for how many days?'))
km=float(input('How much kilometers your car has travelled since the day you rented it?'))
p1=60*old
p2=0.15*km
pp=p1+p2
print('Your car has travelled {} kilometers and you have rented him for {} days.\nThe money you has to pay is {} Reais.'.format(km,old,pp))
