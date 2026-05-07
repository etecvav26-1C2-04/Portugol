/*
Data: 07/05/2026
Autores: Gabriela Onaga e Giovanna Costa
Descrição: Ler um número entre 50 e 100. Exibir a sequência de Fibonacci até esse número.
*/

#include <iostream>
using namespace std;

int main() {

    int limite;

    cin >> limite;

    if (limite < 50 || limite > 100) {
        cout << "Numero invalido!" << endl;
        return 0;
    }

    int numeroA = 0;
    int numeroB = 1;
    int proximo;

    cout << numeroA << " " << numeroB << " ";

    proximo = numeroA + numeroB;

    while (proximo <= limite) {
        cout << proximo << " ";

        numeroA = numeroB;
        numeroB = proximo;
        proximo = numeroA + numeroB;
    }

    return 0;
}
