#include <stdio.h>
#define N 5

void insertionSort(int vetor[N]) {
    int e, j, chave;

    for (e = 1; e < N; e++) {
        chave = vetor[e];
        j = e - 1;

        // Mover elementos do vetor[0..i-1] que são maiores que a chave
        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }

        vetor[j + 1] = chave;
    }
}

int main() {
    int vetor[N];
    int i;

    printf("Insira os valores a ordenar: ");

    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor desordenado: ");
    for (i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }

    // Chamar a função de ordenação
    insertionSort(vetor);

    // Imprimi o vetor ordenado
    printf("\nVetor Ordenado: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
