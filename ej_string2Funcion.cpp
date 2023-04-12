#include <iostream>

using namespace std;


bool esNumero(char car) {
    return ( (car >=48 && car <=57) );
}
int contarDigitosDeCadena(string cad) {

    int cont = 0;
    for(int i = 0; i < cad.length(); i++) {
        if(esNumero(cad.at(i)))
            cont++;
    }
    return cont; 
}

int main() {

    string cad;
    cout << "Ingrese una cadena: ";
    cin >> cad;

    cout << "La cantidad de numeros en la cadena son: " << contarDigitosDeCadena(cad) << endl;
    
    }