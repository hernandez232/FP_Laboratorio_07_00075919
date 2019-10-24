print ("Ingrese el numero de casos que desea evaluar", " ")
print ("1. Uno", " ")
print ("2. Dos", " ")
print ("3. Tres", " ")
casos = int (input ("Respuesta: "))
print (" ")

def caso1 (n1, n2):
    if n1 > n2:
        return "es mayor que"
    
    elif n1 == n2:
        return "es igual a"

    elif n1 < n2:
        return "es menor que" 

def caso2 (n3, n4):
    if n3 > n4:
        return "es mayor que"
    
    elif n3 == n4:
        return "es igual a"

    elif n3 < n4:
        return "es menor que"

def caso3 (n5, n6):
    if n5 > n6:
        return "es mayor que"
    
    elif n5 == n6:
        return "es igual a"

    elif n5 < n6:
        return "es menor que" 

if casos == 1:
    print ("Caso 1")
    n1 = int (input ("Ingrese el primer numero: "))
    n2 = int (input ("Ingrese el segundo numero: "))
    print (" ")
    print (n1, caso1(n1, n2), n2)

elif casos == 2:
    print ("Caso 1")
    n1 = int (input ("Ingrese el primer numero: "))
    n2 = int (input ("Ingrese el segundo numero: "))
    print (" ")

    print ("Caso 2")
    n3 = int (input ("Ingrese el primer numero: "))
    n4 = int (input ("Ingrese el segundo numero: "))
    print (" ")
    print (n1, caso1(n1, n2), n2)
    print (n3, caso2(n3, n4), n4)


elif casos == 3:
    print ("Caso 1")
    n1 = int (input ("Ingrese el primer numero: "))
    n2 = int (input ("Ingrese el segundo numero: "))
    print (" ")

    print ("Caso 2")
    n3 = int (input ("Ingrese el primer numero: "))
    n4 = int (input ("Ingrese el segundo numero: "))
    print (" ")

    print ("Caso 3")
    n5 = int (input ("Ingrese el primer numero: "))
    n6 = int (input ("Ingrese el segundo numero: "))
    print (" ")
    print (n1, caso1(n1, n2), n2)
    print (n3, caso2(n3, n4), n4)
    print (n5, caso3(n5, n6), n6)

else: print ("Valor ingresado es incorrecto")