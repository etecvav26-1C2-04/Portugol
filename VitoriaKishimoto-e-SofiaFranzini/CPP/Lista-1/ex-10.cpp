#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int numeroSecreto = rand() % 100 + 1;
    int palpite;
    int tentativas = 0;

    do {
        cin >> palpite;
        tentativas++;

        if (palpite > numeroSecreto) {
            cout << "Muito alto!" << endl;
        } else if (palpite < numeroSecreto) {
            cout << "Muito baixo!" << endl;
        } else {
            cout << "Correto!" << endl;
        }

    } while (palpite != numeroSecreto);

    cout << "Quantidade de palpites: " << tentativas << endl;

    return 0;
}
