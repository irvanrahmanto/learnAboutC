#include <stdio.h>
#include <stdlib.h>

void displayMenu(){
    printf("\n");
    printf("=======================================================\n");
    printf("         Assignment 2 - Matrix Multiplication          \n");
    printf("=======================================================\n");
}

void matrixMultiplication(){
    int firstMatrix[10][10];
    int secondMatrix[10][10];
    int resultMatrix[10][10];

    int i;
    int j;
    int k;
    int rowA;
    int columnA;
    int rowB;
    int columnB;
    int jumlah = 0;

    printf("Masukkan Jumlah Baris matriks A: ");
    scanf("%d",&rowA);
    printf("Masukkan Jumlah Kolom matriks A: ");
    scanf("%d",&columnA);

    printf("Masukkan Jumlah Baris Matriks B: ");
    scanf("%d",&rowB);
    printf("Masukkan Jumlah Kolom Matriks B: ");
    scanf("%d",&columnB);

    if(columnA != rowB)
    {
    printf("Matriks tidak dapat dikalikan satu sama lain.\n");
    } else {
    printf("\nMasukkan Elemen Matriks A: \n");
    for(i = 0; i < rowA; i++)
    {
        for(j = 0; j < columnA; j++)
        {
            printf("(%d , %d) :", i, j);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("\nMasukkan Elemen Matriks B: \n");
    for(i = 0; i < rowB; i++)
    {
        for(j = 0; j < columnB; j++)
        {
             printf("(%d , %d) :", i, j);
             scanf("%d", &secondMatrix[i][j]);
        }
    }

    for(i = 0; i < rowA; i++)
        {
        for(j = 0; j < columnB; j++)
            {
            for(k = 0; k < rowB; k++){
            jumlah = jumlah + (firstMatrix[i][k] * secondMatrix[k][j]);
        }
        resultMatrix[i][j] = jumlah;
        jumlah = 0;
            }
        }

    printf("\nHasil Perkalian Matriks A dan B: \n");
    for(i = 0; i < rowA; i++)
        {
            for(j = 0; j < columnB; j++)
        {
            printf("%d\t", resultMatrix[i][j]);
        }
            printf("\n");
        }
    }
}

int main()
{
    matrixMultiplication();
    return 0;
}
