/* 
Data: 05/05/2026
Autores: Gabriela Onaga e Giovanna Costa 
Descrição: Ler vários números até que a soma desses números seja maior que 100. Exibir a multiplicação dos números lidos e
parar quando a soma passar de 100; multiplicar todos os números lidos até esse ponto
*/

#include <iostream>

using namespace std;
	
int main(){
	
	int numero;
	int soma=0;
	long produto=1;
	
	while (soma <=100){
			
	cout << "Digite o número: ";
	cin >> numero;
	
	
	soma += numero;
	produto*= numero;
	
	}
	
		
	cout << "Produto final: " << produto << "\n\n";
	
	
	return 0;
}
