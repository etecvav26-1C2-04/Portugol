#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;
    long long multiplicacao = 1;

    while (soma <= 100) {
        cin >> numero;

        soma += numero;
        multiplicacao *= numero;
    }

    cout << "Multiplicacao: " << multiplicacao << endl;

    return 0;
}
