#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct kegiatan{
    char activity[35];
    int tanggal;
    int bulan;

    struct kegiatan *next;
}*head, *tail, *current;

void thePushHead(char activity, int tanggal, int bulan){
    //alokasi memori data yang baru
    current = (struct kegiatan*) malloc(sizeof(struct kegiatan));

    strcpy(current->activity, activity);
    current->tanggal = tanggal;
    current->bulan = bulan;

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

    printf("Push sukses, kegiatan berhasil ditambahkan!");
    thePushHead(activity, tanggal, bulan);
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


void main(){
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
    if(inpMenu == 1){
        firstMenu();

    }else if(inpMenu == 2){
        secondMenu();
    }else if(inpMenu == 3){
        thePrint();
    }else{
        printf("Menu yang anda inputkan tidak tersedia! \n");
    }

    return 0;
}
