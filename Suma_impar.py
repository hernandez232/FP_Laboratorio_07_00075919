print ("Ingrese la cantidad de casos a evaluar", " ")
print ("1. Uno", " ")
print ("2. Dos", " ")
casos = int (input ("Respuesta: "))
print (" ")

def impares (n1, n2):
    impar = 0
    for i in range (n1, n2+1):
        if i%2 != 0:
            impar = impar + i
    return impar

def impares2 (n3, n4):
    impar2 = 0
    for i in range (n3, n4+1):
        if i%2 != 0:
            impar2 = impar2 + i
    return (impar2)

if casos == 1:
    print ("Ingrese el rango del caso a evaluar", " ")
    n1 = int (input("Inicio de rango: "))
    n2 = int (input("Fin de rango: "))
    print (" ")
    print ("La suma de todos los numeros impares en el rango ingresado es:", impares (n1, n2))

elif casos == 2:
    print ("Ingrese el rango del primer caso a evaluar", " ")
    n1 = int (input("Inicio de rango: "))
    n2 = int (input("Fin de rango: "))
    print (" ")
    print ("Ingrese el rango del segundo caso a evaluar", " ")
    n3 = int (input("Inicio de rango: "))
    n4 = int (input("Fin de rango: "))
    print (" ")
    print ("La suma de todos los numeros impares del primer caso ingresado es:", impares (n1, n2))
    print ("La suma de todos los numeros impares del segundo caso ingresado es:", impares2 (n3, n4))

else: print ("Valor ingresado es incorrecto")
