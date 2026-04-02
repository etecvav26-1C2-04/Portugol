/*
 Data: 02/04/2026
  Autores: Sofia Franzini e Vitória Kishimoto
  Descrição: Ler o valor de uma compra e calcular o desconto de acordo com as seguintes regras:

Menor que R$100 → sem desconto
Entre R$100 e R$500 → 10% de desconto
Acima de R$500 → 20% de desconto
Ao final, exibir o valor após o desconto.
 */
 programa
{
	
	funcao inicio()
	{
	
real valor, desconto, valor_final

escreva("Qual o valor da compra? ")

leia(valor)

se (valor < 100) {
   desconto = 0
}
senao se (valor <= 500) {
   desconto = valor * 10 / 100
}
senao {
   desconto = valor * 20 / 100
}

valor_final = valor - desconto

escreva("Valor da compra: ", valor)
escreva("\nValor final com desconto: ", valor_final)

		
	}
}
