#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mahasiswa{
    int nim;
    char nama[30];
    struct mahasiswa *next;
}*head, *tail, *current;

void pushHead(int nim, char nama[]){
    current = (struct mahasiswa*)malloc(sizeof (struct mahasiswa));
    current->nim=nim;
    strcpy(current->nama, nama);

    if(head == NULL){
        head = tail = current;
    }else{
        current->next = head;
        head = current;
    }
}

void pushTail(int nim, char nama[]){
    current = (struct mahasiswa*)malloc(sizeof (struct mahasiswa));
    current->nim=nim;
    strcpy(current->nama, nama);

    if(head == NULL){
        head = tail = current;
    }else{
        tail->next = current;
        tail=current;
    }
    tail->next=NULL;
}

void popHead(){
    current=head;
    if(head==NULL){
        printf("No data");
    }else if(head=tail){
        head=tail=NULL;
        free(current);
    }else{
        head=head->next;
        free(current);
    }
}

void popTail(){
    if(head==NULL){
        printf("No data!");
    }else if(head==tail){
        head=tail=NULL;
        free(current);
    }else{
        struct mahasiswa *temp=head;
        while(temp->next != tail){
            temp=temp->next;
        }
        current=tail;
        tail=temp;
        free(current);
        tail->next=NULL;
    }
}

void thePrint(){
    current=head;
    while(current != NULL){
        printf("%s -> %d \n", current->nama,current->nim);
        current =
    }
}

void main(){
    printf("Test!");
    return 0;
}
