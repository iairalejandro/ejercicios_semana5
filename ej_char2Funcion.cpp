#include <iostream>

using namespace std;

bool esNumero(char car) {

    int val = static_cast<int>(car);
    return ( (val >=48 && val <=57) );


}

int main() {

    char car;
    cout << "Ingrese el caracter: ";
    cin >> car;
    cout << esNumero(car) << endl;

}