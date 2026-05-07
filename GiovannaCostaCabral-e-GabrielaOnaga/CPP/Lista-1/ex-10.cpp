/*
   Data: 07/05/2026
   Autores: Gabriela Onaga e Giovanna Costa
   Finalidade: Simular um jogo de adivinhação. O programa gera um número
   aleatório e o jogador precisa acertá-lo. A cada tentativa, o programa
   informa se o palpite é muito alto, muito baixo ou correto. Quando acertar,
   exibe a quantidade de palpites.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int palpites = 0;
    int numAleatorio, palpite;

    srand(time(0));

    numAleatorio = rand() % 1000 + 1;

    do {

        cout << "De um palpite: ";
        cin >> palpite;

        palpites++;

        if (palpite > numAleatorio) {

            cout << "Muito alto!\n";

        } else if (palpite < numAleatorio) {

            cout << "Muito baixo!\n";

        } else {

            cout << "Acertou!\n";
        }

    } while (palpite != numAleatorio);

    cout << "Quantidade de palpites: " << palpites << "\n";

    return 0;
}
