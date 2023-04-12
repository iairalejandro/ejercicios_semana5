#include <iostream>

using namespace std;

bool esCaracter(char car) {

    int val = static_cast<int>(car);
    return ( (val >=65 && val <=90) || (val >=97 && val <=122) );


}

int main() {

    char car;
    cout << "Ingrese el caracter: ";
    cin >> car;
    cout << esCaracter(car) << endl;

}