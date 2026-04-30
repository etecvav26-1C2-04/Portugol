/*
Data: 30/04/2026
Autores: Gabriela Onaga e Giovanna Costa
Descrição:Ler um número inteiro. Verificar e exibir se o número é primo.
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    bool primo = true;

    cout << "Digite um numero: ";
    cin >> num;

    if (num < 2) {
        primo = false;
    } else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                primo = false;
            }
        }
    }

    if (primo) {
        cout << "É primo";
    } else {
        cout << "Nao é primo";
    }

    return 0;
}
