#include <iostream>

using namespace std;

int contarCharDeCadena(string cad, char car) {

    int cont = 0;
    for(int i = 0; i < cad.length(); i++) {
        if(car == cad.at(i))
            cont++;
    }

    return cont; 
}

int main() {

    string cad;
    char car;
    cout << "Ingrese una cadena: ";
    cin >> cad;
    cout << "Ingrese una caracter: ";
    cin >> car;

    cout << "El caracter " << "|" << car << "|" << " se repite " << contarCharDeCadena(cad, car) << " veces!" << endl;
    
    }