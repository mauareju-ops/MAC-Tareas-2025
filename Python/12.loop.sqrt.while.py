n = int(input("Ingresa el n numero de numeros al cuadrado a sumar\n"))
numsqrt = 0
i=1
while i<=n: 
  print(i, end= "")
  print("^2",end=" ")
  print("+ ",end="")
  numsqrt += i*i
  i+=1
    
print(" ")
print("El resultado es: ",end=" ")
print(numsqrt)
