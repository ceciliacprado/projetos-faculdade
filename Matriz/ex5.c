#include <studio.h>

/*Crie um algoritmo que leia um vetor com 20 números e some apenas os elementos positivos e que 
estão nas posições pares do vetor. Apresente o valor da soma no final.*/

int main(void) {
    
    int vet1[20], x, soma=0; 

    for (x = 0; x < 20; x++) {
        printf("Digite um número para a posição %d do vetor: ", x); 
        scanf("%d", &vet1[x]); 
    }

    for (x = 0; x < 20; x++) {
        if (vet1[x] > 0) {
            soma += vet1[x]; 
        }
    }

    printf("A soma dos elementos positivos nas posições pares do vetor é: \n", soma); 

    return 0; 
}