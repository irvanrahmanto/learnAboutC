#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

struct accountNasabah {
    char inpName[20];
    char inpTlp[15];
    char inpAddr[40];
    int inpPin;
    int cardNumber;

    struct accountNasabah *next;
} *head, *tail, *current;


/*
void saveNasabahAccount(char inpName[15], char inpTlp, char inpAddr[30], char inpPin){
    char buff[255];
    char text[255];
    FILE *fptr;

    //membuka file untuk ditulis
    fptr=fopen("akunnasabah.txt", "a");
    if(fptr==NULL){
        printf("Error to open! \n");
    }

    struct accountNasabah usr=(%inpName, &inpTlp, &inpAddr, &inpPin);
    fwrite(&usr, sizeof(struct usr), 1, fptr));

    if(fwrite != 0){
        printf("Successfully! \n");
    }else{
        printf("Error reading file! \n");
    }
    fclose(fptr);

    //buka kembali file untuk dibaca
    // baca isi file dengan gets lalu simpan ke buff
    while(fgets(buff, sizeof(buff), fptr)){
        printf("Isi filenya sekarang: %s", buff);
    }

    //tutup file
    fclose(fptr);

    while(fread(&usr, sizeof(struct usr), 1, fptr))){

    }
}
*/

void pushNasabahAccount(char inpName[20], char inpTlp[15], char inpAddr[40], int inpPin){

    current = (struct accountNasabah*) malloc(sizeof(struct accountNasabah));

    strcpy(current->inpName, inpName);
    strcpy(current->inpTlp, inpTlp);
    strcpy(current->inpAddr, inpAddr);
    current->inpPin=inpPin;

    //->next=NULL;

    if(head==NULL){
        head=tail=current;
    }else{
        current->next=head;
        head=current;
    }
}

void popNasabahAccount(char inpName[20], char inpTlp[15], char inpAddr[40], int inpPin){

}

void setorNasabah(){
    int inpNoCard, inpMoney;
    int inpMenu;

    printf("************************************************************\n");
    printf("*. Silahkan masukan Nomor Kartu Akun yang ingin kamu setorkan uang : ");
    scanf("%d", &inpNoCard);
    printf("*. SIlahkan masukan Jumlah uang yang ingin kamu setorkan uang      : ");
    scanf("%d", &inpMoney);
    printf("\n");
    printf("************************************************************\n");
    printf("\n");
    printf("Setoran uang BERHASIL dilakukan! \n");
    printf("\n");
}

void staffBankMenu(){
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
            system("cls");
            setorNasabah();
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

void aksesInformasiAcc(){
    int inpPin;

    printf("Masukan PIN kamu : \n");
    scanf("%d", &inpPin);
    printf("\n");
    printf("                        ---- Informasi Akun Anda ----                          \n");
    printf("Nomor Kartu         : \n");
    printf("Nama Pemilik Akun   : \n");
    printf("Saldo Akun          : \n");
    printf("Nomor Telepon       : \n");
    printf("Alamat              : \n");
    printf("--------------------------------------------------------------------------------\n");
    printf("\n");
    printf("Tekan tombol apa saja untuk melanjutkan!");
}

void nasabahMenu(){
    int inpMenu;

    printf("************************************************************\n");
    printf("|           Aktivitas yang bisa kamu pilih :               |\n");
    printf("------------------------------------------------------------\n");
    printf("\n");
    printf("1. Penarikan Saldo \n");
    printf("2. Akses ke Informasi Akun \n");
    printf("3. Ubah PIN \n");
    printf("4. Transfer Uang \n");
    printf("5. Akses ke Log Aktivitas \n");
    printf("6. Keluar Program \n");
    printf("************************************************************\n");
    printf("\n");
    printf("Masukkan pilihan anda [1-6]: ");
    scanf("%d", &inpMenu);

    switch(inpMenu){
        case 1:
            printf("Satu \n");
            getchar();
            break;
        case 2:
            system("cls");
            aksesInformasiAcc();
            getchar();
            break;
        case 3:
            printf("Tiga \n");
            getchar();
            break;
        case 4:
            printf("empat \n");
            getchar();
            break;
        case 5:
            printf("Lima \n");
            getchar();
            break;
        case 6:
            exit(0);
            break;
            getch();
        default:
            printf("Menu tidak tersedia!");
            getchar();
            break;
    }
}

void createNasabahAccount(){
    char inpName[20];
    char inpTlp[15];
    char inpAddr[40];
    int inpPin;
    int rand(void);

    printf("****************************************************************************************\n");
    printf("                             Menu Nasabah Bank KEB Hana                                 \n");
    printf("\n");
    printf("Sekarang Kamu sedang membuat Akun Nasabah, silahkan masukkan data informasi dibawah ini:\n");

    do{
        fflush(stdin);
        printf("*. Masukkan Nama anda (Maksimal 20 digit karakter)          : ");
        scanf("%[^\n]s", inpName);
        fflush(stdin);
    }while(strlen(inpName) < 1 || strlen(inpName) > 20);

    do{
        printf("*. Masukkan Nomor Telepon anda (Maksimal 15 digit angka)    : ");
        fflush(stdin);
        scanf("%d", &inpTlp);
        fflush(stdin);
    }while(strlen(inpTlp) < 1 || strlen(inpTlp) > 15);

    do{
        printf("*. Masukkan Alamat anda (Maksimal 40 digit karakter)        : ");
        scanf("%[^\n]s", inpAddr);
        fflush(stdin);
    }while(strlen(inpAddr) < 1 || strlen(inpAddr) > 40);

    do{
        printf("*. Silahkan buat PIN anda (6 digit angka)                   : ");
        scanf("%d", &inpPin);
        fflush(stdin);
    }while(strlen(inpPin) < 1 || strlen(inpPin) > 6);

    printf("\n");
    printf("Sekarang anda diberikan Nomor kartu yang digunakan untuk login, HARAP DICATAT!! \n");
    printf("\n");
    printf("                        ---- Akun Berhasil Dibuat ----                          \n");
    printf("Nama                    : %s      \n", inpName);
    printf("Nomor Telepon           : %d      \n", inpTlp);
    printf("Alamat                  : %s      \n", inpAddr);
    printf("PIN                     : %d      \n", inpPin);
    printf("Nomor Kartu anda adalah : %d      \n", rand());
    printf("--------------------------------------------------------------------------------\n");
    printf("\n");
    printf("Tekan tombol apa saja untuk melanjutkan!");
    printf("\n");

    //Save or push!
    //saveNasabahAccount(inpName, inpTlp, inpAddr, inpPin);
   // nasabahAccount(inpName, inpAddr, inpTlp, inpPin);
    printf("Data berhasil disimpan di list! \n");
    printf("Isi dari list anda : \n");
    printList();
}

void printList(){
    current = head; //set current sebagai head
	while(current != NULL){ //looping selama current bukan null
		printf("Nama anda    : %s -> %d\n",current->inpName); //tampilkan nilai nama dan nim
		printf("Address anda : %s -> %d\n",current->inpAddr);
		current = current->next; //set current menjadi nilai setelahnya
	}

    /*
	while(ptr != NULL){ //looping selama current bukan null
		printf("Nama anda    -> %d \n",ptr->inpName); //tampilkan nilai nama dan nim
		printf("Address anda -> %d \n",ptr->inpAddr);
		ptr = ptr->next;
	}
    printf(" [null] \n");
    */
}

void displayMenu(){
    time_t now = time(NULL);
    char *string_now = ctime(&now);
    int inpMenu;

    back:
    system("cls");
    printf("**************************************************************\n");
    printf("|               Selamat Datang di Bank KEB Hana              |\n");
    printf("|                                                            |\n");
    printf("|------------------------------------------------------------|\n");
    printf("| Tanggal dan Waktu (UTC+7): %s                               \n", string_now);
    printf("|------------------------------------------------------------|\n");
    printf("\n");
    printf("Silakan Pilih Menu : \n");
    printf("**************************************************************\n");
    printf("1. Membuat Akun Nasabah                                      |\n");
    printf("2. Masuk sebagai Nasabah                                     |\n");
    printf("3. Membuat Akun Staf Bank                                    |\n");
    printf("4. Masuk Sebagai Staf Bank                                   |\n");
    printf("5. Membuat Akun Manager Bank                                 |\n");
    printf("6. Masuk sebagai Manager Bank                                |\n");
    printf("7. Keluar Program                                            |\n");
    printf("**************************************************************\n");
    printf("\n");
    printf("Masukkan pilihan anda [1-5]: ");
    scanf("%d", &inpMenu);
    fflush(stdin);

    switch(inpMenu){
        case 1:
            system("cls");
            createNasabahAccount();
            getchar();
            goto back;
            break;
        case 2:
            system("cls");
            nasabahMenu();
            getchar();
            //goto back;
            break;
        case 3:
            printf("Menu 3 bray! \n");
            getchar();
            goto back;
            break;
        case 4:
            system("cls");
            staffBankMenu();
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
            exit(0);
            break;
            getch();
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
