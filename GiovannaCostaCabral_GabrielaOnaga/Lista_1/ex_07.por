/*
Data: 12/03/2026
Nomes: Giovanna Costa e Gabriela Onaga
Descrição: Ler a base menor, a base maior e a altura. Calcular e mostrar a área de
um trapézio: (base menor + base maior) + altura / 2.
 */

programa
{
	
	funcao inicio()
	{
		real altura, base_menor, base_maior, area
		
		escreva("Qual a base menor, maior e a área do trapézio? ")
		leia(base_menor, base_maior, altura)
		
		area = base_menor+base_maior + altura / 2

		escreva("A área do trapézio é de ", area)
	}
}
