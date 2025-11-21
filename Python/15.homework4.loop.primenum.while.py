import math

ui=int(input("Ingresa el numero hasta el que quieres validar si es primo:\n"))

print("Numeros primos entre 0 y",end=" ")
print(ui)
i=2
while i<=ui:
    isP=True
    j = 2
    while j<=math.isqrt(i):
        if i%j==0:
            isP=False
            break
        j+=1
    if isP:
        print(i, end=" ")

    i+=1
