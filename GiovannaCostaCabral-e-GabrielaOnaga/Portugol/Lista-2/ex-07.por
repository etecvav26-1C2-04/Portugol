/*
 Data: 09/04/2026
  Autores: Gabriela Onaga e Giovanna Costa
  Descrição: Ler um caractere e verificar se ele é uma vogal. Exibir o caractere informado e indicar se é ou não uma vogal.
 */
 programa
{
	
	funcao inicio()
	{
	
caracter letra

escreva("Qual é a letra? ")
leia(letra)

se (letra == 'a' ou letra == 'e' ou letra == 'i' ou letra == 'o' ou letra == 'u' ou letra == 'A' ou letra == 'E' ou letra == 'I' ou letra == 'O' ou letra == 'U') {
   escreva(letra, " é uma vogal")
}
senao {
   escreva(letra, " não é uma vogal")
}

	}
}
