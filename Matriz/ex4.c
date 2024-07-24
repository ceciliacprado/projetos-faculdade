#include <studio.h>

/*Elabore um algoritmo que leia 20 números do teclado e os armazene em um vetor. Em seguida, 
leia um número n qualquer e apresente na tela a quantidade de vezes que o número n aparece no vetor. 
Se o número não estiver no vetor, informe.*/

int main(void) {
    
    int vet1[20], x, n, count=0; 

    for (x = 0; x < 20; x++) {
        printf("Digite um número para a posição %d do vetor: ", x); 
        scanf("%d", &vet1[x]); 
    }

    printf("\nDigite um número: "); 
    scanf("%d", &n); 

    for (x = 0; x < 20; x++) {
        if (vet1[x] == n) {
            count++; 
        }    
    }   
    
    if (count > 0) {
        printf("O número %d aparece %d vezes no vetor. \n", n, count); 
    } else {
        printf("O número %d não aparece no vetor. \n", n); 
    }
    
return 0; 
}