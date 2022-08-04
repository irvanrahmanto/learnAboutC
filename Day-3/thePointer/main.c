#include <stdio.h>
#include <stdlib.h>

void alamatMemori(){
    int umur=19;
    float tinggi = 175.6;

    int *pointer_umur = &umur;
    int *pointer2 = &umur;
    float *p_tinggi = &tinggi;

    printf("alamat memori variabel 'umur' adalah = %d \n", &umur);
    printf("alamat memori variabel 'tinggi' adalah = %d \n", &tinggi);

    printf("referensi alamat memori *pointer_umur = %d \n", pointer_umur);
    printf("referensi alamat memori *pointer2 = %d \n", pointer2);
    printf("referensi alamat memori *p_tinggi = %d \n", p_tinggi);

    printf("alamat memori variabel 'pointer_umur' adalah = %d \n", &pointer_umur);
    printf("alamat memori variabel 'pointer2' adalah = %d \n", &pointer2);
    printf("alamat memori variabel 'p_tinggi' adalah = %d \n", &p_tinggi);
}

//Halaman 23
void doublePointer(){
    int angka=10;
    int *p=&angka;

    printf("Nilai dari variabel angka : %d \n", angka);
    printf("Nilai dari variabel *p    : %d \n", *p);

    printf("Address dari variabel angka : %d \n", &angka);
    printf("Address dari variabel *p    : %d \n", p);

    int **p2=&p;

    printf("Nilai dari variabel **p2 : %d \n", **p2);
    printf("Nilai dari variabel  *p2 : %d \n", *p2);
}

//halaman 27
void dynamicSinglePointer(){
    int r=3;
    int c=4;

    int *ptr, count=0, i;

    ptr=(int *)malloc((r*c) * sizeof(int));
    for(i = 0; i < r * c; i++){
        ptr[i] = i+1;
        printf("%d", ptr[i]);
        if((i+1) % c==0){
            printf("\n");
        }
    }
    free(ptr);
}

//halaman 28
/*
void dynamicDoublePointer(){
    int r=3;
    int c=4;

    int i,j,count;

    for(i=0; i<r; i++){
        arr[i]
    }
}
*/

//halaman 30
void pointerPassByValue(int a){
    a *= 2;
    printf("%d\n", a);
}

void theMain(){
    int nilai = 5;
    pointerPassByValue(nilai);

    printf("%d\n", nilai);
}

//halaman 31
void passByReference(int a){
    a *= 2;
    printf("%d\n", a);
}

void theMain2(){
    int nilai = 5;
    passByReference(nilai);

    printf("%d\n", nilai);
}

void main(){
    //Tinggal nyalain comment nya aja kalo mau running fungsi nya

    //alamatMemori();

    //halaman 27
    //doublePointer();

    //halaman 28
    dynamicSinglePointer();

    //halaman 30
    //theMain();

    //halaman 31
    //theMain2();

    return 0;
}
