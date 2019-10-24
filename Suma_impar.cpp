#include <iostream>
#include <cmath>

using namespace std;

int casos = 0, inicio = 0, inicio2 = 0, fin = 0, fin2 = 0;
int impar (int inicio, int fin);
int impar2 (int inicio2, int fin2);

int main (){
    cout << "Ingrese la cantidad de casos a evaluar" << endl;
    cout << "1. Uno" << endl << "2. Dos" << endl << "Respuesta: "; cin >> casos;
    cout << endl;

    switch (casos){
        case 1:
        cout << "Ingrese el rango del caso a evaluar" << endl;
        cout << "Inicio de rango: "; cin >> inicio;
        cout << "Fin de rango: "; cin >> fin;
        cout << endl;
        cout << "La suma de todos los numeros impares del caso ingresado es: " << impar (inicio,fin);
        break;

        case 2:
        cout << "Ingrese el rango del primer caso a evaluar" << endl;
        cout << "Inicio de rango: "; cin >> inicio;
        cout << "Fin de rango: "; cin >> fin;
        cout << endl;

        cout << "Ingrese el rango del segundo caso a evaluar" << endl;
        cout << "Inicio de rango: "; cin >> inicio2;
        cout << "Fin de rango: "; cin >> fin2;
        cout << endl;

        cout << "La suma de todos los numeros impares del primer caso ingresado es: " << impar (inicio,fin) << endl;
        cout << "La suma de todos los numeros impares del segundo caso ingresado es: " << impar2 (inicio2,fin2);
        break;

    }

    
    return 0;
}

int impar (int inicio, int fin){
    int impares = 0, i = 0;
    for (i = inicio; i <= fin; i++){
        if (i%2 != 0){
            impares = impares + i;
            }
    }

    return impares;
}

int impar2 (int inicio2, int fin2){
    int impares = 0, i = 0;
    for (i=inicio2; i<=fin2; i += 1){
        if (i%2 != 0){
            impares = impares + i;
        }
    }

    return impares;
}