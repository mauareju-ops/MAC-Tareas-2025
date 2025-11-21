import random
NUMERO_ADIVINAR=random.randint(1,100)
numero_usuario=-1
while numero_usuario!=NUMERO_ADIVINAR:
    numero_usuario=int(input("Ingresa el numero a adivinar [1, 100]: "))
    if numero_usuario == NUMERO_ADIVINAR:
        print("Felicidades, adivinaste el numero :)")
    elif numero_usuario < NUMERO_ADIVINAR:
        print("El numero a adivinar es mayor")
    else:
        print("El numero a adivinar es menor")
