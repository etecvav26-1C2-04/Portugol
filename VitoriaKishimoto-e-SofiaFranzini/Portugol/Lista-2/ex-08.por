 /*
Data: 02/04/2026
Autores: Vitória Kishimoto e Sofia Franzini
Descrição:Ler três números inteiros e exibir o maior desses três números
*/
programa
{
	
	funcao inicio()
	{
		inteiro n1, n2, n3, maior

		escreva ("Digite o número 1: ")
		leia (n1)

		escreva ("Digite o número 1: ")
		leia (n2)

		escreva ("Digite o número 1: ")
		leia (n3)

		maior = n1

		se (n2 > maior) {
  			 maior = n2
		}

		se (n3 > maior) {
  			 maior = n3
		}

		escreva("Maior valor: ", maior)
	}
}
