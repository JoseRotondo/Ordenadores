#include <stdio.h>
#define N 5

void selectionSort(int vetor[N]) {
    int i, j, indice_menor;

    for (i = 0; i < N - 1; i++) {
        indice_menor = i;

        for (j = i + 1; j < N; j++) {
            if (vetor[j] < vetor[indice_menor]) {
                indice_menor = j;
            }
        }

        // Troca  elemento
        int temp = vetor[i];
        vetor[i] = vetor[indice_menor];
        vetor[indice_menor] = temp;
    }
}

int main() {
    int vetor[N];
    int i;

    printf("Insira os valores a ordenar: ");

    for(i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor desordenado: ");
    for(i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }

    // ativa função para ordenar
    selectionSort(vetor);


    printf("\nVetor Ordenado: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
