#include <stdio.h>
#include <stdlib.h>

void exampleArr(){
    int numOfArr[5] = {1,2,3,4,5};
    printf("%d", numOfArr[2]);

    char niai[6] = "0234125";
    printf("%d%d", niai[0], niai[4]);
}

void countArr(){
    int nilai[5];
    int i;
    int tampil;
    char nama[50];
    char str;

    printf("Masukkan Nama Anda : ");
    scanf("%[^\n]s", &nama);


    printf("Masukkan Nilai Ujian Anda : \n");
    for(i=0; i<5; i++){
        printf("Nilai yang ke-%d : ", (i+1));
        scanf("%d", &nilai[i]);
    }
    printf("\n");

    printf("Anda yang bernama %s mempunya nilai sebanyak \n", nama);

    for(i=0; i<5; i++){
        printf("\n");
        printf("\n Nilai ke-%d : %d \n", (i+1), nilai[i]);
    }
    printf("\n");

    printf("Tampilkan Nilai ke- ");
    scanf("%d", &tampil);

    printf("Nilai ke-%d : %d", tampil, nilai[tampil-1]);
    printf("\n");
}

void arrayTwoDimension(){
    int matrix[3][3];

    int i,j;

    for(i=0; i<=2; i++){
        for(j=0; j<=2; j++){
            printf("Masukkan Nilai Angka pada baris ke-%d dan kolom ke-%d : ",i,j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    //Output
    for(i=0; i<=2; i++){
        for(j=0; j<=2; j++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}

void challangeMatrix(){
    int matrix[3][3];
    int i,j;
    int baris = 0;
    int kolom = 0;
    printf("Input baris: ");
    scanf("%d", &baris); fflush(stdin);
    printf("\nInput kolom: ");
    scanf("%d", &kolom); fflush(stdin);

    //inisialisasi array 2 dimensi
    for(i=0; i<baris; i++){
        for(j=0; j<kolom; j++){
            printf("Masukkan Nilai Angka pada index [%d][%d] : ", i,j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    //Output Array 2 dimensi
    for(i = 0; i < baris; i++){
        for(j = 0; j < kolom; j++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}

void arrayMultiDimension(){

}

int main()
{
    //exampleArr();
    //countArr();
    //arrayTwoDimension();
    challangeMatrix();

    return 0;
}
