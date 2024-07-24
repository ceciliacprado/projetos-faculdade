#include <studio.h>

/*Elabore um algoritmo que leia um vetor de 15 posições do teclado e um número n entre 1 e 15. 
Mostre na tela o índice e os elementos do vetor cuja posição é inferior a n.*/

int main(void) {

    int vet1[15], x, n; 

    for (x = 0; x < 15; x++) {
        printf("Digite um némro para a posição %d do vetor: ", x); 
        scanf("%d", &vet1[x]); 
    }

    printf("Digite um núemro entre 1 e 15: "); 
    scanf("%d", &n); 

    for (x = 0; x < 15; x++) {
        if (n > vet1[x]) {
            printf("\nO número menor que este é o: %d e está na posição: %d\n", vet1[x], x); 
        }
    }
return 0; 
}