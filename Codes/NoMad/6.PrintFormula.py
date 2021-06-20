import math
c= 50
h =30
value=[]
items = [x for x in input("Enter the number: ").split(',')]
for d in items:
    var = round(math.sqrt(2*c*float(d)/h))
    a = str(int(var))
    value.append(a)
print(','.join(value))



