#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <float.h>

void checkStrCpy(){
    char title[] = "Belajar bahasa c";
    char title_copy[20];

    strcpy(title_copy, title);

    printf("Isi title_copy adalah : %s\n", title_copy);
}

void checkStrCat(){
    char nama[] = "Irvan Naufali Rahmanto";
    char gelar[] = ", S.Kom., M.T";

    strcat(nama, gelar);
    printf("Nama Lengkap : %s\n", nama);
}

void checkStrCmp(){
    char str1[] = "Hacktive8";
    char str2[] = "Teknologi";
    int Hasil;

    Hasil = strcmp(str1, str2);

    printf("Kata pertama adalah: %s\n", str1);
    printf("Kata kedua adalah: %s\n", str2);

    if(Hasil == 0){
        printf("Kata pertama dan kedua sama");
    }else{
        printf("Kata pertama dan kedua berbeda");
    }

}

void checkStrLen(){
    char nama[] = "Irvan Naufali Rahmanto";
    int length_name;

    length_name = strlen(nama);
    printf("Nama: %s\n", nama);
    printf("Panjang karakter : %d\n", length_name);
}

void mathOperation(){
    //Declare variable
    float a;
    float x;
    float y;

    //Input
    printf("Masukkan bilangan = ");
    scanf("%f", &a);

    //Operasi perangkat
    x=sqrt(a);
    y=pow(x,3);

    //Output

    printf("\n Akar dari %2.1f = %4.2f", a,x);
    printf("\n %4.2f pangkat 3 = %2.1f", x,y);


    /*
    printf("\n Akar dari %f = %f", a,x);
    printf("\n %f pangkat 2 = %f", x,y);
    */
}

void testPuts(){
    puts("Hello world! Test for puts");
}

void trialInputSpasi(){
    char theName[20];

    printf("Nama Anda : ");
    scanf("%[^\n]s", theName);

    printf("Nama anda adalah: %s\n", theName);
}

void inputUsingGets(){
    char name[50];
    char web_address[50];

    printf("Nama : ");
    gets(name);

    printf("Web : ");
    gets(web_address);

    puts("Your Result is : ");
    printf("Your entered name : %s\n", name);
    printf("Your address : %s\n", web_address);
}

void isCheckDataType(){
    int x;
    int y;
    int z;

    x = 20;
    y = 30;
    z = x+y;

    printf("Hasil Penjumlahan %d dengan %d adalah %d \n", x,y,z);
}

const float Pi = 3.14;

void countCircle(){
    float r;
    float luas;
    float keliling;

    printf("------------------- LINGKARAN-----------------------------------\n");
    printf("Masukan jumlah jari-jari lingkaran (cm) : \n");
    scanf("%f", &r);

    printf("|                                                               |\n");

    luas = Pi*r*r;
    keliling = 2*Pi*r;

    printf("Luas lingkaran dengan jari-jari %2.2f cm yaitu %2.2f cm2 \n", r, luas);
    printf("Keliling lingkaran dengan jari-jari %2.2f cm yaitu %2.2f cm2 \n", r, keliling);
    printf("\n---------------------------------------------------------------\n");
}

void luasLingkaran(){
    float r;
    float luas;

    printf("--------------- LUAS LINGKARAN-----------------------------------\n");
    printf("Masukan jumlah jari-jari lingkaran (cm) : \n");
    scanf("%f", &r);

    printf("|                                                               |\n");

    luas = Pi*r*r;

    printf("Luas lingkaran dengan jari-jari %2.2f cm yaitu %2.2f cm2", r, luas);
    printf("\n---------------------------------------------------------------\n");
}

void kelilingLingkaran(){
    float r;
    float keliling;


    printf("--------------- KELILING LINGKARAN-----------------------------------\n");
    printf("Masukkan jumlah jari-jari lingkaran (cm) : \n");
    scanf("%f", &r);

    keliling = 2*Pi*r;

    printf("Keliling lingkaran dengan jari-jari %2.2f cm yaitu %2.2f cm2", r, keliling);
    printf("\n-------------------------------------------------------------------\n");
}

void isVariable(){
    int x=21;
    int y=17;

    printf("Nilai X sebelum : %d\n", x);
    printf("Nilai Y sebelum : %d\n", y);

    printf("\n");

    x = x-5;
    y = y+3;

    printf("Nilai akhir dari X adalah : %d\n", x);
    printf("Nilai akhir dari Y adalah : %d\n", y);
}

void isYearKabisat(){
    int yourYear;

    printf("Input tahun : ");
    scanf("%d", &yourYear);

    /*
    if(yourYear % 400 == 0){
        printf("%d adalah tahun kabisat \n", yourYear);
    }else if(yourYear % 100 == 0){
        printf("%d bukan tahun kabisat \n", yourYear);
    }else if(yourYear % 4 == 0){
        printf("%d adalah tahun kabisat \n", yourYear);
    }else{
        printf("Bukan tahun kabisat");
    }

    if((yourYear % 4 == 0) && (yourYear % 4 != 0)){
        printf("%d merupakan tahun kabisat \n", yourYear);
    }else if((yourYear % 4 == 0) && (yourYear % 100 == 0)){
        printf();
    }else if((yourYear % 100 == 0) && (yourYear % 400 != 0)){
        printf("%d bukan tahun kabisat \n", yourYear);
    }


    if(yourYear % 100 == 0){
        printf("%d bukan tahun kabisat \n", yourYear);
    }else if(yourYear % 4 == 0 && yourYear % 100 != 0){
        printf("%d merupakan tahun kabisat \n", yourYear);
    }else if(yourYear % 4 == 0 && yourYear % 100 == 0){
        printf("%d merupakan tahun kabisat \n", yourYear);
    }else if(yourYear % 100 == 0 && yourYear % 400 != 0){
        printf("%d bukan tahun kabisat \n", yourYear);
    }else{
        printf("Bukan tahun kabisat!");
    }

    */

    if(yourYear % 4 == 0){
        if(yourYear % 100 == 0){
            if(yourYear % 400 ==0){
                printf("%d merupakan tahun kabisat \n", yourYear);
            }else{
                printf("%d bukan merupakan tahun kabisat \n", yourYear);
            }
        }else{
            printf("%d merupakan tahun kabisat \n", yourYear);
        }
    }else{
        printf("%d bukan merupakan tahun kabisat \n", yourYear);
    }
}

void optionMenu(){
    // pointer for repeatable the menu from the bottom!
    back:

    printf("Selamat datang di Hactiv8 Restaurant : \n");
    printf("Menu Makanan \n");
    printf("1. Nasi Padang \n");
    printf("2. Pempek Palembang \n");
    printf("3. Siomay Bandung \n");

    int choice;
    int inp;

    printf("Masukkan pilihan anda (1,2,3) : \n");
    scanf("%d", &inp);

    switch(inp){
        case 1: {
            printf("Nasi Padang sudah dipesan, harap menunggu beberapa menit!");
            break;
        }
        case 2: {
            printf("Pempek Palembang sudah dipesan, harap menunggu beberapa menit!");
            break;
        }
        case 3: {
            printf("Siomay Bandung sudah dipesan, harap menunggu beberapa menit!");
            break;
        }
        default:
            printf("Pilihan yang anda masukan tidak tersedia!");
            printf("\n");

            // The pointer back input
            goto back;
            break;
    }
}

int main()
{

    /*
    checkStrCpy();

    checkStrCat();

    checkStrCmp();

    checkStrLen();

    mathOperation();

    testPuts();

    trialInputSpasi();

    inputUsingGets();

    isCheckDataType();

    luasLingkaran();

    printf("\n");
    printf("\n");
    printf("\n");

    kelilingLingkaran();

    countCircle();

    isVariable();

    isYearKabisat();

    */

    optionMenu();

    return 0;
}
