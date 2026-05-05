/* 
Data: 05/05/2026
Autores: Gabriela Onaga e Giovanna Costa 
Descrição: Ler vários números até que a soma desses números seja maior que 100. Exibir a multiplicação dos números lidos e
parar quando a soma passar de 100; multiplicar todos os números lidos até esse ponto
Data: 05/05/2026
*/

#include <iostream>
# define canal cout <<"Exécicio 6\n";

using namespace std;
	
int main(){

	canal
	
	int num;
	int soma=0;
	long produto=1;
	
	while (soma <=100){
			
	cout << "Digite o número: ";
	cin >> num;
	
	
	soma += num;
	produto*= num;
	
	}
	
		
	cout << "Produto final: " << produto << "\n\n";
	
	
	return 0;
}
