/*
Data: 05/05/2026
Autores:Gabriela Onaga e Giovanna Costa 
Descrição:Ler um número inteiro, calcular e exibir separadamente as potências de 2^0 até 2^(esse número).
/* 

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;

    cout << "Digite um numero: ";
    cin >> num;

    for (int i = 0; i <= num; i++) {
        long long resultado = pow(2, i);
        cout << "2 elevado a " << i << " = " << resultado << endl;
    }

    return 0;
}
