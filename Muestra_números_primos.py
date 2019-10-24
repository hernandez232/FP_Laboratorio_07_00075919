print ("Ingrese el rango", " ")
inicio = int (input ("Inicio de rango: "))
fin = int (input ("Fin de rango: ",))
print (" ")

print ("Los numeros primos en el rango ingresado son: ")

def primos (inicio, fin):
    for i in range (inicio, fin+1):
        divisores = 0
        for j in range (1, i+1):
            if i%j == 0:
                divisores = divisores + 1
        if divisores == 2:
            print (i)