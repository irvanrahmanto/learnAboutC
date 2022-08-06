#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct PersonalData{
    char *nama;
    char *alamat;
    int umur;
};

int main(){
    struct PersonalData data1, data2;
    data1.nama = "Irvan Rahmanto";
    data1.alamat = "Jakarta";
    data1.umur = 22;

    data2.nama = "Robert Lewandowski";
    data2.alamat = "Munich";
    data2.umur = 34;

    printf("## PERSONAL DATA 1 : ## \n");
    printf("Nama   : %s \n", data1.nama);
    printf("Alamat : %s \n", data1.alamat);
    printf("Umur   : %s \n", data1.umur);

    printf("## PERSONAL DATA 2 : ## \n");
    printf("Nama   : %s \n", data2.nama);
    printf("Alamat : %s \n", data2.alamat);
    printf("Umur   : %s \n", data2.umur);

    return 0;
}
