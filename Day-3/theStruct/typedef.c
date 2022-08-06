#include <stdio.h>
#include <stdlib.h>

struct Mahasiswa {
    char nama[50];
    char universitas[50];
    float ipk;
};

typedef struct Mahasiswa biodataMhs;

int main(){

    biodataMhs mhs1;

    strcpy(mhs1.nama, "Yogie Chandra");
    strcpy(mhs1.universitas, "Universitas Matana");
    mhs1.ipk = 3.72;

    printf("%s kuliah di %s ", mhs1.nama, mhs1.universitas);
    printf("lulus dengan IPK %.2f pada tahun 2020", mhs1.ipk);
    return 0;
}
