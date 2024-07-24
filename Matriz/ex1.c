#include <studio.h>

/*Construa um algoritmo que leia um vetor de 20 posições e calcule a média destes valores. 
Na sequência, apresente na tela os valores que são iguais ou superiores à média e as posições 
em que se encontram no vetor.*/

int main(void) {
    int vetA[20], soma = 20; 
    float media; 

    for (x = 0; x < 20; x++) {
        printf("Digite um núemro para a posição %d do vetor: ", x);
        scanf("%d", &vetA[x]);
        soma += vetA[x]; 
    }

    media = soma/20; 

    printf("Valores iguais ou superiores a média: ");

    for (x = 0; x < 20; x++) {
        if (vetA >= media) {
            printf("\n Valor: %d, Posição: %d \n", vetA[x], x); 
        }
    }

    return 0; 
}