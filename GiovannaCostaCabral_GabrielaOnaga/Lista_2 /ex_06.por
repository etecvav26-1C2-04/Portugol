/*
Data: 02/04/2026
Autores: Gabriela Onaga e Giovanna Costa
Descrição: Ler a idade do passageiro. Determinar o preço de uma passagem de
acordo com a idade do passageiro: até 2 anos (gratuita), de 3 a 12 anos
(meia tarifa) e acima de 12 anos (tarifa completa). Exibir o tipo de tarifa
que deve ser aplicada.
*/ 
programa
{
	
	funcao inicio()
	{
		inteiro idade
		real precop

		escreva ("Qual sua idade?")
		leia (idade)

		se (idade <= 2) {
   			escreva("Tarifa gratuita!")
		}
		senao se (idade <= 12) {
   			escreva("Pagará meia tarifa")
		}
		senao {
   			escreva("Pagará a tarifa completa")
		}
	}
}
