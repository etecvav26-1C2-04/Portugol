#include <iostream>
using namespace std;

int main() {
    double numero, soma = 0;

    cout << "Digite números para somar." << endl;
    cout << "Digite um número negativo para encerrar." << endl;

    while (true) {
        cin >> numero;

        if (numero < 0) {
            break;
        }

        soma += numero;
    }

    cout << "Soma total: " << soma << endl;

    return 0;
}
