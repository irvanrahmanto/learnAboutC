#include <stdio.h>
#include <stdlib.h>

void readFile(){
    char buff[255];
    FILE *fptr;

    //membuka file
    if((fptr=fopen("perkenalan.txt", "r")) == NULL){
        printf("Error File tidak ada!");
        exit(1);
    }

    while(fgets(buff, sizeof(buff), fptr)){
        printf("%s", buff);
    }
    //tutup file
    fclose(fptr);
}

void writeFile(){
    char buff[255];
    char text[255];
    FILE *fptr;

    //membuka file untuk ditulis
    fptr=fopen("situsweb.txt", "w");

    int i;
    for(i=0; i<5; i++){
        //mengambil input dari user
        printf("Isi baris ke-%d: ", i);
        fgets(text, sizeof(text), stdin);

        //menulis txt ke file
        fputs(text, fptr);
    }

    printf("File berhasil ditulis \n");

    //tutup file setelah ditulis
    fclose(fptr);

    //buka kembali file untuk dibaca
    // baca isi file dengan gets lalu simpan ke buff
    while(fgets(buff, sizeof(buff), fptr)){
        printf("Isi filenya sekarang: %s", buff);
    }

    //tutup file
    fclose(fptr);
}

void reWriteFile(){
    char buff[255];
    char text[255];
    FILE *fptr;

    //buka file untuk ditulis
    fptr = fopen("test.txt", "a+");

    for(int i = 0; i < 5; i++){
        //ambil input dari user
        printf("\nIsi baris ke-%d: ", i);
        fgets(text, sizeof(text), stdin);

        //tulis text ke file
        fputs(text, fptr);
    }

    printf("File berhasil ditulis\n");

    //tutup setelah ditulis
    fclose(fptr);
}

void displayMenu(){
    int input;
    menu:
    system("cls");
    printf("1. Write File\n");
    printf("2. Read File\n");
    printf("3. Rewrite File\n");

    do{
    printf("Masukkan Input: ");
    scanf("%d", &input); fflush(stdin);
    }while(input < 1 || input > 3);

    switch (input)
    {
    case 1: writeFile(); getchar(); goto menu;break;
    case 2: readFile(); getchar(); goto menu; break;
    case 3: reWriteFile(); getchar(); goto menu; break;
    default:
        break;
    }
}

void main(){
    displayMenu();

    return 0;
}
