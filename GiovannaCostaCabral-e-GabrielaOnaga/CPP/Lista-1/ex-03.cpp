#include <iostream>
using namespace std;

int main() {
    double numero, soma = 0;

    cout << "Digite vários numeros:"<< endl;

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
