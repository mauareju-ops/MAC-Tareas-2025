usnum=int(input("Ingresa el numero a invertir\n"))
print(end=" ")
rev=0
rem=0
while usnum>0:
   rem=usnum%10
   rev=rev*10+rem
   usnum=usnum//10
print(rev)
