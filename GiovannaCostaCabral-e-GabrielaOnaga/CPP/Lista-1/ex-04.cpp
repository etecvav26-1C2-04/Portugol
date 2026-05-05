/*
Data: 05/05/2026
Autores: Gabriela Onaga e Giovanna Costa 
Descrição: Ler 10 números. Verificar e exibir o menor e maior número dessa sequência.
/* 

#include <iostream>
using namespace std;

int main() {
    int n, menor, maior;

    for (int i = 1; i <= 10; i++) {
        cout << "Digite um numero: ";
        cin >> n;

        if (i == 1) {
            menor = n;
            maior = n;
        } else {
            if (n < menor) {
                menor = n;
            }
            if (n > maior) {
                maior = n;
            }
        }
    }

    cout << "\nMenor numero: " << menor << endl;
    cout << "Maior numero: " << maior << endl;

    return 0;
}
