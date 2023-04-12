#include <iostream>

using namespace std;

int fibo(int n) {

    int n1, n2, fib;
    n1 = n2 = fib = 1;

    for(int i = 1; i < n; i++) {
        fib = n1 + n2;
        n1 = n2;
        n2 = fib;
    }

    return fib;

}

int main() {

    int n;
    cout << "Ingrese el numero: ";
    cin >> n;
    cout << "El fib es: " << fibo(n) << endl;

}