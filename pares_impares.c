// Lê números até o usuário digitar 0, conta os pares e ímpares e exibe os totais.

//Blibiotecas
#include <stdio.h>

//Estrutura Principal
int main(){
    //Variavel
    int numero = 0, quantidadeImpar = 0, quantidadePar = 0, quantidadeNegativos = 0,  maiorNumero = 0, primeiroNumero = 1;

    printf("=====================\n");
    printf("===== IMPAR PAR =====\n");
    printf("=====================\n");
    //Loop ate que o usuario digite 0 para encerra 
    do{
        // Solicita um numero ao usuario
        printf("\nDigite 0 para encerrar\n");
        printf("Digite um numero: ");
        scanf("%d", &numero);
        //Confere se o usuario n digitou 0
        if(numero != 0){
            //Descobre se o numero e impar ou par
            if(numero % 2 == 0){
                quantidadePar++;
                printf("Par\n");
            }else{
                quantidadeImpar++;
                printf("\nImpar\n");   
            }
            if (numero < 0){
                quantidadeNegativos++;
            }
            // Busca o maior numero digitado, ignorando o zero
            if(primeiroNumero == 1){
                maiorNumero = numero;
                primeiroNumero = 0;
            }
            if(numero > maiorNumero){
                maiorNumero = numero;
            }
            
        }
    }while (numero != 0);
    //Mostra todo resultado na tela
    printf("\nQuantidade de numeros Impar: %d\nQuantidade de numeros pares: %d\nQuantidade de numero negativo: %d\nMaior numero digitado: %d", quantidadeImpar, quantidadePar, quantidadeNegativos, maiorNumero);


    return 0;
}