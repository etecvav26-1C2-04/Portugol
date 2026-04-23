/*Data: 07/04/2026
Autores: Sofia Franzini e Vitória Kishimoto
Descrição: Ler um número, verificar e exibir se o número é um quadrado perfeito, ou
seja, se a raiz quadrada dele é um número inteiro.
*/ 
programa
{
    inclua biblioteca Matematica --> mat

    funcao inicio()
    {
        real lado

        escreva("Digite o número: ")
        leia(lado)

        real raiz = mat.raiz(lado, 2.0)

        se (raiz * raiz == lado)
        {
            escreva("O número é um quadrado perfeito")
        }
        senao
        {
            escreva("O número não é um quadrado perfeito")
        }
    }
}
