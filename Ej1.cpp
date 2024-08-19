#include <iostream>
using namespace std;

int potenciaRecursiva(int base, int exponente) {
    if (exponente == 0) {
        return 1;
    } else {
        return base * potenciaRecursiva(base, exponente - 1);
    }
}

int main() {
    int base, exponente;
    cout << "Introduce la base: ";
    cin >> base;
    cout << "Introduce el exponente: ";
    cin >> exponente;
    cout << "El resultado de elevar " << base << " a " << exponente << " es: " << potenciaRecursiva(base, exponente) << endl;
    return 0;
}