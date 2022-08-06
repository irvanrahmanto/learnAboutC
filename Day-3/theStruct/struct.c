#include <stdio.h>
#include <stdlib.h>

struct PersonalData{
    char *nama;
    char *alamat;
    int umur;
};

int main(){

    struct PersonalData data1, data2;

    data1.nama = "John Doe";
    data1.alamat = "England";
    data1.umur = 22;

    data2.nama = "Jeff Han";
    data2.alamat = "Canada";
    data2.umur = 24;

    printf("--- Personal Data 1 ---\n");
    printf("Nama : %s\n", data1.nama);
    printf("Alamat : %s\n", data1.alamat);
    printf("Umur : %d\n", data1.umur);

    printf("\n");

    printf("--- Personal Data 2 ---\n");
    printf("Nama : %s\n", data2.nama);
    printf("Alamat : %s\n", data2.alamat);
    printf("Umur : %d\n", data2.umur);
    return 0;
}
