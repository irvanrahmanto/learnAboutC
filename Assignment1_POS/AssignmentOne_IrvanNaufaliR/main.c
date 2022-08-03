#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void theDisplayMenu(){
    printf("|-------------------------------------------------------------------------|\n");
    printf("|                      WELCOME TO HACTIVE8 RESTAURANT                     |\n");
    printf("|-------------------------------------------------------------------------|\n");
    printf("\n");
    printf("---------------------------------------------------------------------------\n");
    printf("|   PAKET   |   MENU MAKANAN         |   MENU MINUMAN  |   HARGA          |\n");
    printf("--------------------------------------------------------------------------|\n");
    printf("|     A     |   Ayam goreng + Nasi   +   Teh Manis     |  Rp. 16.000      |\n");
    printf("|     B     |   Mie rebus   + Telor  +   Teh Tarik     |  Rp. 12.000      |\n");
    printf("|     C     |   Mie goreng  + Telor  +   Es Jeruk      |  Rp. 9.000       |\n");
    printf("|     D     |   Gulai       + Nasi   +   Es Teh Manis  |  Rp. 18.000      |\n");
    printf("|     E     |   Soto        + Nasi   +   Es Jeruk      |  Rp. 11.000      |\n");
    printf("--------------------------------------------------------------------------\n");

}

void displayMenu(){
    back:


    theDisplayMenu();

    printf("\n");
    printf("Pilih Paket Yang Akan Anda Pesan [A/B/C/D/E] : \n");

    // Inputan Pilihan Paket
    char inpPaket;
    scanf("%c", &inpPaket);
    fflush(stdin);
    printf("\n");

    // Inputan Jumlah Pembelian
    printf("Jumlah Pembelian (dalam satuan porsi) : \n");
    int jumPembelian;
    scanf("%d", &jumPembelian);


    int countKembalian, inpBayar, totalBayar;

    switch(inpPaket){

        case 'a': {
            do{
                    printf("Nama Makanan                   : Ayam goreng + Nasi \n");
                    printf("Nama Minuman                   : Teh Manis          \n");
                    printf("Jumlah Makanan yang anda pesan : %d                 \n", jumPembelian);
                    printf("Harga Paket                    : Rp. 16.000         \n");
                    printf("____________________________________________________\n");
                    printf("\n");
                    totalBayar = 16000*jumPembelian;
                    printf("Total Pembayaran               : Rp. %d             \n", totalBayar);
                    printf("____________________________________________________\n");
                    printf("Pembayaran                     : Rp. ");
                    scanf("%d", &inpBayar);
                    if(inpBayar > totalBayar){
                        printf("_____________________________________________________\n");
                        countKembalian = inpBayar-totalBayar;
                        printf("Kembalian                      : Rp. %d              \n", countKembalian);
                        printf("_____________________________________________________\n");
                        printf("\n");
                        printf("\n Nominal Pecahan Uang Kembalian : \n");
                        int a=countKembalian / 50000;
                        int b=(countKembalian - (a * 50000)) / 20000;
                        int c=(countKembalian - ((a * 50000) + ( b * 20000))) / 10000;
                        int d=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000))) / 5000;
                        int e=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000) + ( d * 5000)))/1000;
                        int f=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000) + ( d * 5000) + ( e*1000)))/500;
                        int g=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000) + ( d * 5000) + ( e*1000) + ( f*500)))/100;
                        printf("\n");
                        printf ("\n %i %s",a,"lembar Rp. 50.000,-");
                        printf ("\n %i %s",b,"lembar Rp. 20.000,-");
                        printf ("\n %i %s",c,"lembar Rp. 10.000,-");
                        printf ("\n %i %s",d,"lembar Rp. 5.000,-");
                        printf ("\n %i %s",e,"lembar Rp. 1.000,-");
                        printf ("\n %i %s",f,"lembar Rp. 500,-");
                        printf ("\n %i %s",g,"lembar Rp. 100,-");
                }else{
                        printf("Maaf uang anda kurang!! \n");
                }
            }while(inpBayar < totalBayar);
            break;
        }
        case 'b': {
            do{
                printf("Nama Makanan                   : Mie Rebus + Telor  \n");
                printf("Nama Minuman                   : Teh Manis          \n");
                printf("Jumlah Makanan yang anda pesan : %d                 \n", jumPembelian);
                printf("Harga Paket                    : Rp. 12.000         \n");
                printf("____________________________________________________\n");
                printf("\n");
                totalBayar = 12000*jumPembelian;
                printf("Total Pembayaran               : Rp. %d             \n", totalBayar);
                printf("____________________________________________________\n");
                printf("Pembayaran                     : Rp. ");
                scanf("%d", &inpBayar);
                if(inpBayar > totalBayar){
                    printf("_____________________________________________________\n");
                    countKembalian = inpBayar-totalBayar;
                    printf("Kembalian                      : Rp. %d              \n", countKembalian);
                    printf("_____________________________________________________\n");
                    printf("\n");
                    printf("\n Nominal Pecahan Uang Kembalian : \n");
                    int a=countKembalian / 50000;
                    int b=(countKembalian - (a * 50000)) / 20000;
                    int c=(countKembalian - ((a * 50000) + ( b * 20000))) / 10000;
                    int d=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000))) / 5000;
                    int e=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000) + ( d * 5000)))/1000;
                    int f=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000) + ( d * 5000) + ( e*1000)))/500;
                    int g=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000) + ( d * 5000) + ( e*1000) + ( f*500)))/100;
                    printf("\n");
                    printf ("\n %i %s",a,"lembar Rp. 50.000,-");
                    printf ("\n %i %s",b,"lembar Rp. 20.000,-");
                    printf ("\n %i %s",c,"lembar Rp. 10.000,-");
                    printf ("\n %i %s",d,"lembar Rp. 5.000,-");
                    printf ("\n %i %s",e,"lembar Rp. 1.000,-");
                    printf ("\n %i %s",f,"lembar Rp. 500,-");
                    printf ("\n %i %s",g,"lembar Rp. 100,-");
                }else{
                    printf("Maaf uang anda kurang!! \n");
                    printf("\n");
                }
            }while(inpBayar < totalBayar);
            break;
        }
        case 'c': {
            do{
                printf("Nama Makanan                   : Mie Goreng + Telor \n");
                printf("Nama Minuman                   : Es Jeruk           \n");
                printf("Jumlah Makanan yang anda pesan : %d                 \n", jumPembelian);
                printf("Harga Paket                    : Rp. 9.000          \n");
                printf("____________________________________________________\n");
                printf("\n");
                totalBayar = 9000*jumPembelian;
                printf("Total Pembayaran               : Rp. %d             \n", totalBayar);
                printf("____________________________________________________\n");
                printf("Pembayaran                     : Rp. ");
                scanf("%d", &inpBayar);
                if(inpBayar > totalBayar){
                    printf("_____________________________________________________\n");
                    countKembalian = inpBayar-totalBayar;
                    printf("Kembalian                      : Rp. %d              \n", countKembalian);
                    printf("_____________________________________________________\n");
                    printf("\n");
                    printf("\n Nominal Pecahan Uang Kembalian : \n");
                    int a=countKembalian / 50000;
                    int b=(countKembalian - (a * 50000)) / 20000;
                    int c=(countKembalian - ((a * 50000) + ( b * 20000))) / 10000;
                    int d=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000))) / 5000;
                    int e=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000) + ( d * 5000)))/1000;
                    int f=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000) + ( d * 5000) + ( e*1000)))/500;
                    int g=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000) + ( d * 5000) + ( e*1000) + ( f*500)))/100;
                    printf("\n");
                    printf ("\n %i %s",a,"lembar Rp. 50.000,-");
                    printf ("\n %i %s",b,"lembar Rp. 20.000,-");
                    printf ("\n %i %s",c,"lembar Rp. 10.000,-");
                    printf ("\n %i %s",d,"lembar Rp. 5.000,-");
                    printf ("\n %i %s",e,"lembar Rp. 1.000,-");
                    printf ("\n %i %s",f,"lembar Rp. 500,-");
                    printf ("\n %i %s",g,"lembar Rp. 100,-");
                }else{
                    printf("Maaf uang anda kurang!! \n");
                    printf("\n");
                }
            }while(inpBayar < totalBayar);
            break;
        }
        case 'd': {
            do{
                printf("Nama Makanan                   : Gulai + Nasi       \n");
                printf("Nama Minuman                   : Es Teh Manis       \n");
                printf("Jumlah Makanan yang anda pesan : %d                 \n", jumPembelian);
                printf("Harga Paket                    : Rp. 18.000         \n");
                printf("____________________________________________________\n");
                printf("\n");
                totalBayar = 18000*jumPembelian;
                printf("Total Pembayaran               : Rp. %d             \n", totalBayar);
                printf("____________________________________________________\n");
                printf("Pembayaran                     : Rp. ");
                scanf("%d", &inpBayar);
                if(inpBayar > totalBayar){
                    printf("_____________________________________________________\n");
                    countKembalian = inpBayar-totalBayar;
                    printf("Kembalian                      : Rp. %d              \n", countKembalian);
                    printf("_____________________________________________________\n");
                    printf("\n");
                    printf("\n Nominal Pecahan Uang Kembalian : \n");
                    int a=countKembalian / 50000;
                    int b=(countKembalian - (a * 50000)) / 20000;
                    int c=(countKembalian - ((a * 50000) + ( b * 20000))) / 10000;
                    int d=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000))) / 5000;
                    int e=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000) + ( d * 5000)))/1000;
                    int f=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000) + ( d * 5000) + ( e*1000)))/500;
                    int g=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000) + ( d * 5000) + ( e*1000) + ( f*500)))/100;
                    printf("\n");
                    printf ("\n %i %s",a,"lembar Rp. 50.000,-");
                    printf ("\n %i %s",b,"lembar Rp. 20.000,-");
                    printf ("\n %i %s",c,"lembar Rp. 10.000,-");
                    printf ("\n %i %s",d,"lembar Rp. 5.000,-");
                    printf ("\n %i %s",e,"lembar Rp. 1.000,-");
                    printf ("\n %i %s",f,"lembar Rp. 500,-");
                    printf ("\n %i %s",g,"lembar Rp. 100,-");
                }else{
                    printf("Maaf uang anda kurang!! \n");
                    printf("\n");
                }
            }while(inpBayar < totalBayar);
            break;
        }
        case 'e': {
            do{
                printf("Nama Makanan                   : Soto + Nasi        \n");
                printf("Nama Minuman                   : Es Jeruk           \n");
                printf("Jumlah Makanan yang anda pesan : %d                 \n", jumPembelian);
                printf("Harga Paket                    : Rp. 11.000         \n");
                printf("____________________________________________________\n");
                printf("\n");
                totalBayar = 11000*jumPembelian;
                printf("Total Pembayaran               : Rp. %d             \n", totalBayar);
                printf("____________________________________________________\n");
                printf("Pembayaran                     : Rp. ");
                scanf("%d", &inpBayar);
                if(inpBayar > totalBayar){
                    printf("_____________________________________________________\n");
                    countKembalian = inpBayar-totalBayar;
                    printf("Kembalian                      : Rp. %d              \n", countKembalian);
                    printf("_____________________________________________________\n");
                    printf("\n");
                    printf("\n Nominal Pecahan Uang Kembalian : \n");
                    int a=countKembalian / 50000;
                    int b=(countKembalian - (a * 50000)) / 20000;
                    int c=(countKembalian - ((a * 50000) + ( b * 20000))) / 10000;
                    int d=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000))) / 5000;
                    int e=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000) + ( d * 5000)))/1000;
                    int f=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000) + ( d * 5000) + ( e*1000)))/500;
                    int g=(countKembalian - ((a * 50000) + ( b * 20000) + (c * 10000) + ( d * 5000) + ( e*1000) + ( f*500)))/100;
                    printf("\n");
                    printf ("\n %i %s",a,"lembar Rp. 50.000,-");
                    printf ("\n %i %s",b,"lembar Rp. 20.000,-");
                    printf ("\n %i %s",c,"lembar Rp. 10.000,-");
                    printf ("\n %i %s",d,"lembar Rp. 5.000,-");
                    printf ("\n %i %s",e,"lembar Rp. 1.000,-");
                    printf ("\n %i %s",f,"lembar Rp. 500,-");
                    printf ("\n %i %s",g,"lembar Rp. 100,-");
                }else{
                    printf("Maaf uang anda kurang!! \n");
                    printf("\n");
                }
            }while(inpBayar < totalBayar);
            break;
        }
        default:
            printf("Pilihan yang Anda masukkan tidak tersedia! silahkan input ulang menu sesuai yang tersedia! \n");
            printf("\n");
            goto back;
            break;
    }


}

int main()
{
    displayMenu();
    return 0;
}
