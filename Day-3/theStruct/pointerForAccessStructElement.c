#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mahasiswa{
    char nama[20];
    char nim[10];
    int tahunLahir;
};

void simpan(struct mahasiswa *mh, char nama[], char nim[], int tahunLahir){
    strcpy(mh->nama, nama);
    strcpy(mh->nim, nim);
    mh->tahunLahir = tahunLahir;
}

int main() {

    char nama[20], nim[10];
    int tahunLahir, umur;

    struct mahasiswa mhs;

    printf("Masukan nama lengkap : ");
    gets(nama);
    printf("Masukan nomor induk mahasiswa : ");
    gets(nim);
    printf("Masukan tahun lahir : ");
    scanf("%d", &tahunLahir);

    simpan(&mhs, nama, nim, tahunLahir);

    umur = 2022 - tahunLahir;

    printf("\nNama lengkap : %s\n", mhs.nama);
    printf("Nomor induk mahasiswa : %s\n", mhs.nim);
    printf("Tahun Lahir : %d\n", mhs.tahunLahir);
    printf("Umur : %d", umur);

    return 0;
}


