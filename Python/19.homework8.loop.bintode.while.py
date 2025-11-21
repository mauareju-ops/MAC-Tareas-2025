usnum=int(input("ingresa el numero binario a convertir a base 10\n"))
print(end=" ")
rev=0
pw=0

while usnum>0:
   rem=usnum%10
   rev+=rem*(2**pw)
   pw+=1
   usnum=usnum//10
print(rev)
