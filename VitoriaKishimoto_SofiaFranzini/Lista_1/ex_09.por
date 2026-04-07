/* Autores: Vitória Kishimoto e Sofia Franzini
 * Data:12/03/2026
 * Exercício:Ler o peso de um boi e o percentual de engorda. Calcular e exibir o novo
peso do boi
 */
  programa
{
	
	funcao inicio()
	{
 real peso_boi, percentual_gordura, peso_final
	
	escreva ("Qual o peso do boi? ") 
	leia (peso_boi)

	escreva ("Qual percentual de gordura? (%)") 
	leia (percentual_gordura) 

	peso_final =  peso_boi + (peso_boi* percentual_gordura)/100

	escreva ("O peso final do boi será de: ", peso_final)		
	}
}
