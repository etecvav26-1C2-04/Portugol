/*
Data: 02/04/2026
Autores: Giovanna Costa e Gabriela Onaga
Descrição: Ler um ano e verificar se o ano é bissexto. Um ano é bissexto se for
divisível por 4, mas não por 100, exceto se for divisível por 400. Exibir o
ano lido, informando se é ou não é bissexto.
*/
programa
{
	
	funcao inicio()
	{
		inteiro ano
	escreva("Digite um ano: ")

	leia(ano)

		se ((ano % 4 == 0 e ano % 100 != 0) ou (ano % 400 == 0)) {
   	escreva(ano, " é bissexto")
}
		senao {
  	escreva(ano, " não é bissexto")
}
	}
}
