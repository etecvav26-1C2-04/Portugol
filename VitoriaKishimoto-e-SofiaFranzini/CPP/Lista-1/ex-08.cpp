#include <iostream>
using namespace std;

int main() {
    int numero;
    int somaPares = 0;
    int somaImpares = 0;

    cin >> numero;

    for (int i = 0; i <= numero; i++) {
        if (i % 2 == 0) {
            somaPares += i;
        } else {
            somaImpares += i;
        }
    }

    cout << "Soma dos pares: " << somaPares << endl;
    cout << "Soma dos impares: " << somaImpares << endl;

    return 0;
}
