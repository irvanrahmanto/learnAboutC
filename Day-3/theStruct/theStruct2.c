#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Siswa {
    char nama[50];
    char sekolah[50];
    unsigned int uangSaku;
};

typedef struct Siswa biodataSiswa;

int main(void){
    biodataSiswa siswa1;

    strcpy(siswa1.nama, "Irvan Naufali Rahmanto \n");
    strcpy(siswa1.sekolah, "Institut Teknologi Bandung \n");
    siswa1.uangSaku=1500000;

    printf("%s bersekolah di %s \n", siswa1.nama, siswa1.sekolah);
    printf("dengan uang saku %i per hari \n", siswa1.uangSaku);

    return 0;
}
