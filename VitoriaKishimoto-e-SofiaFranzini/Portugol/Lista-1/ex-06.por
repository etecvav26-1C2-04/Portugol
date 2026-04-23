/*
Data: 12/03/2026
Nomes: Sofia Franzini e Vitória Kishimoto
Descrição: Ler o peso de uma pessoa em quilos, calcular e mostrar o peso em
gramas.
*/

programa
{
	
	funcao inicio()
	{
		inteiro peso_kilos
		inteiro peso_gramas

     escreva("Quanto pesa a pessoa em quilos? ")
	leia(peso_kilos)

		peso_gramas = peso_kilos*1000

		escreva("Essa pessoa pesa ", peso_gramas, " gramas.")
	}
}
