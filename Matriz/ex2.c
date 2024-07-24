#include <studio.h>

/*Faça um algoritmo que leia 10 números do teclado e os armazene em um vetor. 
Crie um segundo vetor de 10 posições que armazene o dobro de cada um dos números do primeiro vetor. 
Crie um terceiro vetor de 10 posições que armazene o triplo de cada um dos números do primeiro vetor. 
Faça isso da maneira mais otimizada possível. Apresente os três vetores na tela.*/

int main(void) {

    int vet1[10], vet2[10], vet3[10], x; 

    for (x = 0; x < 10; x++) {
        vet2[x] = vet1[x] * 2;
        vet3[x] = vet1[x] * 3; 
    }

    printf("Números digitados: \n");
    for (x = 0; x < 10; x++) {
        printf("%d\n", vet1[x]); 
    }

    printf("\nDobro: \n"); 
    for (x = 0; x < 10; x++) {
        printf("%d\n", vet2[x]); 
    }

    printf("\nTriplo: \n");
    for (x = 0; x < 10; x++) {
        printf("%d\n", vet3[x]);
    }

return 0;

}