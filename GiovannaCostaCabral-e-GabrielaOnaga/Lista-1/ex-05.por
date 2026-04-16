/*
 * Data: 12/03/2026
 * Autoras: Gabriela Onaga e Giovanna Costa
 * Descrição:) O motorista de aplicativo abastece o tanque do seu carro com um
determinado valor em reais. Ler o preço do litro de combustível e o valor
que pretende abastecer. Calcular a quantidade de litro no abastecimento
e exibir os dados lidos e o valor calculado.
 */
 programa
{
	
	funcao inicio()
	{
	inteiro Litros_gasolina
	inteiro Preco_litro
	escreva("Quantos litros de gasolina deseja colocar? ")
	leia(Litros_gasolina)
	Preco_litro = Litros_gasolina * 5
	escreva("Você abasteceu o carro com ", Litros_gasolina, " litros, e deverá pagar R$ ", Preco_litro)
	
	}
}
