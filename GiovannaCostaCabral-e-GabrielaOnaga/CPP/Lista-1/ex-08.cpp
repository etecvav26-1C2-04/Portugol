/* 
Data: 07/05/2026
Autores: Gabriela Onaga e Giovanna Costa 
Descrição: Ler um número. Exiba a soma de todos os números pares e ímpares de zero até o número lido. 
O programa deve percorrer os números de 0 até o valor informado e separar a soma em dois grupos:
soma dos pares; soma dos ímpares.
*/

#include <iostream>
# define canal cout <<"Exécicio 8\n";

using namespace std;
	
int main(){

	canal
	
	int numero, Par, Impar;
	
	cout << "Digite um número: ";
	cin >> numero;
	
	for (int i=0; i<= numero; i++) {
		if(i%2==0)
			Par+=i;
			 else 
				Impar+=i;
			}
	
cout << "Soma dos pares: " << Par << "\n\n";
cout << "Soma dos impares: " << Impar << "\n\n";
	
	return 0;
}
