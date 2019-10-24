#include <iostream>
#include <cmath>

using namespace std;

int n1, n2, n3, n4, n5, n6; 
char caso1 (int n1, int n2);
char caso2 (int n3, int n4);
char caso3 (int n5, int n6);

int main (){
    int casos;
    cout << "Ingrese el numero de casos que desea evaluar:" << endl << "1. Uno" << endl << "2. Dos" << endl << "3. Tres" << endl << "Respuesta: ";
    cin >> casos; cout << endl;

    switch (casos){
        case 1:
        cout << "Caso 1" << endl;
        cout << "Ingrese un numero entero: "; cin >> n1;
        cout << "Ingrese el segundo numero entero: "; cin >> n2; cout << endl;
        cout << n1 << caso1 (n1, n2) << n2;
        break;

        case 2:
        cout << "Caso 1" << endl;
        cout << "Ingrese un numero entero: "; cin >> n1;
        cout << "Ingrese el segundo numero entero: "; cin >> n2; cout << endl;

        cout << "Caso 2" << endl;
        cout << "Ingrese un numero entero: "; cin >> n3;
        cout << "Ingrese el segundo numero entero: "; cin >> n4; cout << endl;
        cout << n1 << caso1 (n1, n2) << n2 << endl;
        cout << n3 << caso2 (n3, n4) << n4;
        break;

        case 3:
        cout << "Caso 1" << endl;
        cout << "Ingrese un numero entero: "; cin >> n1;
        cout << "Ingrese el segundo numero entero: "; cin >> n2; cout << endl;

        cout << "Caso 2" << endl;
        cout << "Ingrese un numero entero: "; cin >> n3;
        cout << "Ingrese el segundo numero entero: "; cin >> n4; cout << endl;

        cout << "Caso 3" << endl;
        cout << "Ingrese un numero entero: "; cin >> n5;
        cout << "Ingrese el segundo numero entero: "; cin >> n6; cout << endl;
        cout << n1 << caso1 (n1, n2) << n2 << endl;
        cout << n3 << caso2 (n3, n4) << n4 << endl;
        cout << n5 << caso1 (n5, n6) << n6;
        break;

    }

    return 0;
}

char caso1 (int n1, int n2){
    if (n1 > n2){
        cout << " es mayor que";
    }
    else if (n1 < n2){
        cout << " es menor que";
    }
    else if (n1 = n2){
        cout << " es igual a";
    }
}

char caso2 (int n3, int n4){
    if (n3 > n4){
        cout << " es mayor que";
    }
    else if (n3 < n4){
        cout << " es menor que";
    }
    else if (n3 = n4){
        cout << " es igual a";
    }
}

char caso3 (int n5, int n6){
    if (n5 > n6){
        cout << " es mayor que";
    }
    else if (n5 < n6){
        cout << " es menor que";
    }
    else if (n5 = n6){
        cout << " es igual a";
    }
}