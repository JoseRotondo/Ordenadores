#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define N 5

int main()
    {
        setlocale(LC_ALL,"");
       int vetor[N],aux,cont;
       printf("Insira os valores a serem ordenados.\n");
       printf("Precione enter após cada inserção: ");

       for (int i=0;i<N;i++)
       {
           scanf("%d",&vetor[i]);
       }
       printf("Desordenado:");
       for(int i=0;i<N;i++)
       {
           printf("%d  ",vetor[i]);
       }


       //Ordenança
        for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
       printf("Vetor Ordenado: ");
       for(int i = 0; i<N;i++)
       {
           printf("%d  ",vetor[i]);
       }
       printf("\n");
       return 0;
    }
