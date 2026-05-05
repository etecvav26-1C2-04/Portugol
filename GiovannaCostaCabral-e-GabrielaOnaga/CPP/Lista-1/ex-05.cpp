/*
Data: 05/05/2026
Autores: Gabriela Onaga e Giovanna Costa 
Descrição: Ler um número para a parada final e outro número que 
representa um múltiplo. Exibir os múltiplos do número lido de 1 
até o número final lido.
/*

#include <iostream>
using namespace std;

int main() {
    int limite, base;

    cout << "Digite o numero final: ";
    cin >> limite;

    cout << "Digite o numero base: ";
    cin >> base;

    for (int i = 1; i <= limite; i++) {
        if (i % base == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
