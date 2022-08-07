#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct kegiatan{
    char activity[35];
    int tanggal;
    int bulan;
    char note[20];

    struct kegiatan *next;
}*head, *tail, *current;

void thePushHead(char activity[], int tanggal, int bulan, char note[]){
    //alokasi memori data yang baru
    current = (struct kegiatan*) malloc(sizeof(struct kegiatan));

    current->tanggal = tanggal;
    current->bulan = bulan;
    strcpy(current->activity, activity);
    strcpy(current->note, note);

    if(head==NULL){
        head = tail = current;
    }else{
        current->next = head;
        head = current;
    }
}

void thePopTail(){
    current=head; //set nilai current sebagai head
	if(head==NULL){ //jika head bernilai null
		printf("No data\n"); //tampilkan info tidak ada data
	}else if(head==tail){ //jika nilai head = tail
		head=tail=NULL; //set nilai head = tail = null
		free(current); //hapus nilai current (head)
	}else{ //jika nilai head bukan null dan bukan tail
		head=head->next; //set nilai head menjadi data selanjutnya dari head
		free(current);// hapus nilai current (head)
	}
}

void firstMenu(){
    printf("\n");
    printf("Masukkan kegiatan : ");
    char activity[30];
    scanf("%s", &activity);

    printf("Masukkan tanggal  : ");
    char tanggal;
    scanf("%d", &tanggal);

    printf("Masukkan Bulan    : ");
    char bulan;
    scanf("%d", &bulan);

    char note;
    char theNote[20];
    do{
        printf("Apakah anda ingin menambahkan note [y/n]: \n");
        scanf("%c", &note);
        if(note == 'Y' && note == 'y'){
            printf("Masukkan note [3-25 char]: ");
            scanf("%s", &theNote);
        }else if(note == 'N' && note == 'n'){
            strcpy(theNote ,"-");
        }else{
            printf("Invalid Data! \n");
        }
    }while((note != 'Y' && note != 'y') && (note != 'N' && note != 'n'));

    thePushHead(activity, tanggal, bulan, note);
    printf("Push sukses, kegiatan berhasil ditambahkan! \n");
    printf("Tekan enter untuk melanjutkan... \n\n");
    getchar();
}

void secondMenu(){
    thePopTail();
}

void thePrint(){
    current = head; //set current sebagai head
	while(current != NULL){ //looping selama current bukan null
		printf("%s -> %d\n",current->activity, current->tanggal); //tampilkan nilai nama dan nim
		current = current->next; //set current menjadi nilai setelahnya
	}
}

void theMenu(){
    back:
    //system("cls");

    printf("===========================\n");
    printf("      AGENDA ELEKTRONIC    \n");
    printf("===========================\n");
    printf("\n");
    printf("1. Push Kegiatan \n");
    printf("2. Pop  Kegiatan \n");
    printf("3. Show List     \n");
    printf("4. Quit          \n");
    printf("\n");
    int inpMenu;
    printf("Input pilihan anda : ");
    scanf("%d", &inpMenu);

    int i;


    switch(inpMenu){
        case 1:
            firstMenu();
            getchar();
            goto back;
            break;
        case 2:
            secondMenu();
            getchar();
            goto back;
            break;
        case 3:
            thePrint();
            getchar();
            goto back;
            break;
        default:
            printf("Wrong!");
            goto back;
            break;
    }
}

void main(){
    theMenu();

    return 0;
}
