#include <studio.h>

/*Faça um algoritmo que leia dois vetores de 10 elementos do teclado e verifique se eles são iguais ou não. 
Para serem iguais, todos os elementos dos dois vetores devem coincidir, nas mesmas posições.*/

int main(void) {

    int vet1[10], vet2[10], x, iguais=1; 

    for (x = 0; x < 10; x++) {
        printf("Digite um número para a posição %d do vetor: ", x); 
        scanf("%d", &vet1[x]); 
    }
    print("\n");

    for (x = 0; x < 10; x++) {
        printf("Digite um núemro para a posição %d do vetor: ", x); 
        sacnf("%d", &vet2[x]); 
    }

    for (x = 0; x < 10; x++) {
        if (vet1[x] != vet2[x]) {
            iguai = 0; 
            break; 
        }
    }

    if (iguais) {
        print("Os vetores são iguais.\n");
    } else {
        printf("Os vetores não são iguais. \n");
    }

    return 0; 
}