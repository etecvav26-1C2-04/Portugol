
/*
Data: 12/03/2026
Autores: Giovanna Costa e Gabriela Onaga
Descrição: O Haras Cavalos Brilhantes compra cavalos com frequência. Ler a
quantidade de cavalos adquiridos recentemente, calcular a quantidade de
ferraduras necessárias para os novos cavalos e exibir a quantidade de
novos cavalos e sua respectiva quantidade de ferraduras.
*/
programa
{
    funcao inicio()
    {
        inteiro cavalos, ferraduras

        escreva("Digite a quantidade de cavalos: ")
        leia(cavalos)

        ferraduras = cavalos * 4

        escreva("Quantidade de cavalos: ", cavalos, "\n")
        escreva("Quantidade de ferraduras: ", ferraduras)
    }
}
