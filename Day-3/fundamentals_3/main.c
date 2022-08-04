#include <stdio.h>
#include <stdlib.h>

int isMultiple(int inp){
    int results;

    results=inp*inp;
    printf("Your result is : %d \n", results);
}

void isMultipleAgain(int inp){
    int results;

    results=inp*inp;
    printf("Your result is : %d \n", results);
}

void sapa(){
    printf("Ini adalah fungsi \n tanpa pengembalian nilai. \n");
}

void sapaNama(char kalimat[]){
    printf("Selamat datang di : %s\n", kalimat);
}

void penjumlahan(int x, int y){
    printf("%d + %d = %d \n", x,y,x+y, " hahaha");
}

int luasLingkaran(int r){
    //pi*r*r
    int luasLing;
    float pi=3.14;

    luasLing = pi*r*r;
    printf("Luas lingkaran adalah : %d \n", luasLing);
}

int kelilingLingkaran(int r){
    //2*pi*r
    int kelilingLing;
    float pi=3.14;

    kelilingLing=2*pi*r;
    printf("Keliling lingkaran adalah : %d \n", kelilingLing);
}

//call by references
void nilai(int *a){
    *a = 10;
}

void callByReferences(){
    int a=5;
    printf("Nilai Awal: %d \n", a);
    nilai(&a);
    printf("Nilai Akhir : %d", a);
}

int count;
extern void write_extern();


//Call by value
void tambah(int, int);

int main()
{
    //sapa();
    //isMultiple(5);
    //isMultipleAgain(6);

    /*

    sapa;
    printf("\n");

    sapaNama("London");
    sapaNama("Istanbull");
    sapaNama("Paris");

    printf("\n");

    penjumlahan(5,5);
    penjumlahan(5,8);
    penjumlahan(9,8);

    */

    /*
    int r;
    printf("Input jari-jari anda : ");
    printf("\n");
    scanf("%d", &r);

    luasLingkaran(r);
    kelilingLingkaran(r);


    declare();

    callByReferences();
    */

    count=5;
    write_extern();



    return 0;
}

void declare(){
    int a=10, b=20;

    printf("Nilai sebelum fungsi dipanggil : \n");
    printf("A = %d | B = %d\n", a,b);
    tambah(a,b);
    printf("Nilai setelah fungsi dipanggil : \n");
    printf("A = %d | B = %d\n", a,b);
}

void tambah(int x, int y){
    x += 5;
    y++;
    printf("\n Nilai di dalam fungsi : \n");
    printf("A = %d | B = %d \n\n", x,y);
}
