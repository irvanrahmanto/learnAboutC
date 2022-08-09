#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <unistd.h>
#include <time.h>

void nasabahMenu(){
    int inpMenu;

    printf("************************************************************\n");
    printf("1. Tambahkan Akun untuk Nasabah yang sudah ada \n");
    printf("2. Hapus Akun untuk Nasabah yang sudah ada \n");
    printf("3. Ubah Informasi Akun \n");
    printf("4. Lakukan Setoran ke Akun Nasabah \n");
    printf("5. Keluar Program \n");
    printf("************************************************************\n");
    printf("\n");
    printf("Masukkan pilihan anda [1-5]: ");
    scanf("%d", &inpMenu);

    switch(inpMenu){
        case 1:
            printf("Satu \n");
            getchar();
            break;
        case 2:
            printf("Dua \n");
            getchar();
            break;
        case 3:
            printf("Tiga \n");
            getchar();
            break;
        case 4:
            printf("Empat \n");
            getchar();
            break;
        case 5:
            break;
        default:
            printf("Menu tidak tersedia!");
            getchar();
            break;
    }
}

void createNasabahAccount(){
    char inpName[15];
    int inpTlp;
    char inpAddr[40];
    int inpPin;

    printf("************************************************************\n");
    printf("                 Menu Nasabah Bank KEB Hana                 \n");
    printf("\n");
    printf("Sekarang Kamu sedang membuat Akun Nasabah, silahkan masukkan data informasi dibawah ini: \n");
    printf("*. Masukkan Nama anda (Maksimal 20 digit karakter)          : ");

    scanf("%[^\n]s", &inpName);
    printf("*. Masukkan Nomor Telepon anda (Maksimal 15 digit angka)    : ");

    scanf("%d", &inpTlp);
    printf("*. Masukkan Alamat anda (Maksimal 40 digit karakter)        : ");

    scanf("%[^\n]s", &inpAddr);
    printf("*. Silahkan buat PIN anda (6 digit angka)                   : ");

    scanf("%d", &inpPin);
    printf("\n");

    printf("Sekarang anda diberikan Nomor kartu yang digunakan untuk login, HARAP DICATAT!! \n");
    printf("Nomor Kartu anda adalah : %d\n", inpPin);
    printf("Tekan tombol apa saja untuk melanjutkan!");
}

void displayMenu(){
    time_t now = time(NULL);
    char *string_now = ctime(&now);
    int inpMenu;

    back:
    system("cls");
    printf("************************************************************\n");
    printf("               Selamat Datang di Bank KEB Hana              \n");
    printf("\n");
    printf("Tanggal dan Waktu (UTC+7): %s \n", string_now);
    printf("\n");
    printf("Silakan Pilih Menu : \n");
    printf("************************************************************\n");
    printf("1. Membuat Akun Nasabah       \n");
    printf("2. Masuk sebagai Nasabah      \n");
    printf("3. Membuat Akun Staf Bank     \n");
    printf("4. Masuk Sebagai Staf Bank    \n");
    printf("5. Membuat Akun Manager Bank  \n");
    printf("6. Masuk sebagai Manager Bank \n");
    printf("7. Keluar Program             \n");
    printf("************************************************************\n");
    do{
        printf("\n");
        printf("Masukkan pilihan anda [1-5]: ");
        scanf("%d", &inpMenu);
        fflush(stdin);
    }while(inpMenu < 1 || inpMenu > 7);

    switch(inpMenu){
        case 1:
            createNasabahAccount();
            getchar();
            goto back;
            break;
        case 2:
            nasabahMenu();
            getchar();
            goto back;
            break;
        case 3:
            printf("Menu 3 bray! \n");
            getchar();
            goto back;
            break;
        case 4:
            printf("Menu 4 bray! \n");
            getchar();
            goto back;
            break;
        case 5:
            printf("Menu 5 bray! \n");
            getchar();
            goto back;
            break;
        case 6:
            printf("Menu 6 bray! \n");
            getchar();
            goto back;
            break;
        case 7:
            break;
        default:
            printf("Menu tidak tersedia!");
            break;
    }
}

int main()
{
    displayMenu();
    return 0;
}
