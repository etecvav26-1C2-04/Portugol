programa
{

inclua biblioteca Matematica --> mat


    funcao inicio()
    {
            //Declaracao de variavel e pedir ao usuario o tamanho do lado
        real lado
                escreva("tamanho do lado: ")
                leia(lado)

        real raiz = mat.raiz(lado, 2.0)

        //Verifica se a raiz contem resto 0
                se (raiz * raiz == lado){
                        escreva("O número é um quadrado perfeito")
                } senao {
                        escreva ("O número não é um quadrado perfeito")
                }

    }
}
