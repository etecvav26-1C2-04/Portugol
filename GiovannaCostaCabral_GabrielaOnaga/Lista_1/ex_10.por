/* Autores: Gabriela Onaga e Giovanna Costa Cabral
 * Data:12/03/2026
 * Exercício:  O caixa do supermercado recebe uma certa quantidade de moedas por
dia. Ler a quantidade de moedas recebidas de acordo com cada um dos
valores 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Calcular e
exibir o valor recebido de cada um dos tipos de moeda e a soma total em
moedas.
*/
 programa
{
	
	funcao inicio()
	{
 inteiro m1, m5, m10, m25, m50, m1real
	real total, totalm1, totalm5, totalm10, totalm25, totalm50, totalmreal

	escreva ("Quantidade de moedas de 1 centavo: ") 
	leia (m1)
	limpa ()

	escreva ("Quantidade de moedas de 5 centavo: ") 
	leia (m5)
	limpa ()

	escreva ("Quantidade de moedas de 10 centavo: ") 
	leia (m10)
	limpa ()

	escreva ("Quantidade de moedas de 25 centavo: ") 
	leia (m25)
	limpa ()

	escreva ("Quantidade de moedas de 50 centavo: ") 
	leia (m50)
	limpa ()

	escreva ("Quantidade de moedas de 1 real: ") 
	leia (m1real)
	limpa ()

	 totalm1 = 0.01* m1
	 totalm5 = 0.05* m5
	 totalm10 = 0.10* m10
	 totalm25 = 0.25* m25
	 totalm50 = 0.50* m50
	 totalmreal = 1.00* m1real
	 
	 total =  totalm1 +  totalm5 + totalm10 +  totalm25 +  totalm50 +  totalmreal 

	 escreva ("Valor total de moedas de 1 centavo: " , totalm1)
	 escreva ("\nValor total de moedas de 5 centavo: " , totalm5)
	 escreva ("\nValor total de moedas de 10 centavo: " , totalm10)
	 escreva ("\nValor total de moedas de 25 centavo: " , totalm25)
	 escreva ("\nValor total de moedas de 50centavo: " , totalm50)
	 escreva ("\nValor total de moedas de 1  real: " , totalmreal)
	 escreva ("\nSoma do valor total de moedas:  " , total)
