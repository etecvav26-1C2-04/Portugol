/* 
Data: 07/05/2026
Autores: Gabriela Onaga e Giovanna Costa 
Descrição: Ler a quantidade de pessoas e ler a altura dessas pessoas. Calcular e exibir a altura média de todas as pessoas. Somar todas as alturas;
dividir pela quantidade de pessoas.
*/

#include <iostream>
# define canal cout <<"Exercicio 7\n";

using namespace std;

int main() {
	
    int quantidade, i;
    float soma=0, altura, media;
	
	cout << "Digite a quantidade de pessoas: ";
    cin >> quantidade;

    for (int i = 1; i <= quantidade; i++) {
    	
    	cout << "Digite a altura da pessoa: ";
        cin >> altura;
        soma= soma + altura;
    }

    media = soma / quantidade;

    cout << "Media das alturas: " << media << "\n\n";

    return 0;
}
