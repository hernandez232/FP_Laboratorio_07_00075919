#include <iostream>
#include <cmath>

using namespace std;

int inicio = 0, fin = 0;
int primos (int inicio, int fin);

int main (){
    cout << "Ingrese el rango" << endl;
    cout << "Inicio de rango: "; cin >> inicio;
    cout << "Fin de rango: "; cin >> fin; cout << endl;
    cout << "Los numeros primos en el rango ingresado son: ";
    cout << primos (inicio, fin) << " ";
    
    return 0;
}

int primos (int inicio, int fin){
    int i = inicio, j = 1, divisores = 0;
    for (i; fin>=i; i++){ // Ciclo donde se desarrolla el rango de n1-n2
        divisores = 0;
        for (j; i>=j; j++){ // Se divide desde 1 hasta i
            if (i%j == 0){ // Si la division de cada numero tiene 0 de residuo es porque i es divisible
                divisores += 1; // Incrementa la variable
                }
            }
        if (divisores == 2){ // Si el total de divisores i es 2, signifca que es primo
            return i;
            }
        }
    }
    