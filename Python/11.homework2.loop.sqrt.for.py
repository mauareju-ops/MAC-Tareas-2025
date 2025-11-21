n = int(input("Ingresa el n numero de numeros al cuadrado a sumar\n"))
numsqrt = 0

for i in range(1, n + 1):
  print(i, end= "")
  print("^2",end=" ")
  print("+ ",end="")
  numsqrt += i*i
    
print(" ")
print("El resultado es: ",end=" ")
print(numsqrt)
