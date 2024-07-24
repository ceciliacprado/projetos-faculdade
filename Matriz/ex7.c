#include <studio.h>

/*Dados dois vetores A e B de tamanho igual a 10, crie um vetor C do mesmo tamanho, cujos 
elementos são a soma dos elementos de mesmo índice dos vetores A e B. Mostre os três vetores no final.*/

int main(void) {

    int vetA[10], vetB[10], vetC[10], x; 

    for (x = 0; x < 10; x++) {
        printf("Digite um número para a posiçaõ %d do vetor: ", x); 
        sacnf("%d", &vetA[x]); 
    }

    printf("\n"); 

    for (x = 0; x < 10; x++) {
        printf("Digite um número para a posiçaõ %d do vetor: ", x); 
        sacnf("%d", &vetB[x]); 
    }

    for (x = 0; x < 10; x++) {
        vetC[x] = vetA[x] + vetB[x]; 
    }

    printf("Vetor A: "); 
    for (x = 0; x < 10; x++) {
        printf("%d", vetA[x]); 
    }
    printf("\n"); 

    printf("Vetor B: "); 
    for (x = 0; x < 10; x++) {
        printf("%d", vetB[x]); 
    }
    printf("Vetor B: ");

return 0; 
}