/*
 Data: 09/04/2026
  Autores: Gabriela Onaga e Giovanna Costa
  Descrição: Ler um número, verificar e exibir se o número é um quadrado perfeito, ou
seja, se a raiz quadrada dele é um número inteiro.
 */
 programa
{

inclua biblioteca Matematica --> mat


    funcao inicio()
    {
        real numero
                escreva("Digite o número: ")
                leia(numero)

        real raiz = mat.raiz(numero, 2)

                se (raiz * raiz == numero)
                {
                        escreva("O número é um quadrado perfeito.")
                }
                
                senao {
                        escreva ("O número não é um quadrado perfeito.")
                }

    }
}
