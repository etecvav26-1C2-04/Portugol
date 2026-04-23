/*
Data: 23/04/2026
Autores: Vitória Kishimoto e Sofia Franzini
Descrição: Ler um número inteiro. Verificar e exibir se o número é primo.
*/

include <iostream>
using namespace std;

int main() {
    int num;
    bool primo = true;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    // Caso especial
    if (num < 2) {
        primo = false;
    } else {
        // Testa divisores de 2 até num-1
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                primo = false;
                break; // já encontrou divisor, pode parar
            }
        }
    }

    if (primo)
        cout << "O numero eh primo." << endl;
    else
        cout << "O numero nao eh primo." << endl;

    return 0;
}