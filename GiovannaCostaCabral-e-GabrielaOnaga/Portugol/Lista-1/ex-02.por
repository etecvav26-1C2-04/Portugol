/*
Data: 11/03/2026
Autor: Gabriela Onaga e Giovanna Costa Cabral
Exercício: Ler o nome e a idade do usuário. Calcular a idade em meses e dias. Exibir
o nome e a idade em anos, meses e dias.
*/
programa
{
	
	funcao inicio()
	{
	cadeia nome
	inteiro idade, meses, dias
	
	escreva ("Qual o seu nome? ")
	leia (nome)

	escreva ("Qual a sua idade? ")
	leia (idade)

	 meses = idade * 12
      dias = idade * 365
        
        escreva("Nome: ", nome, "\n")
        escreva("Idade em anos: ", idade, "\n")
        escreva("Idade em meses: ", meses, "\n")
        escreva("Idade em dias: ", dias)
	
	
		
	}
}
