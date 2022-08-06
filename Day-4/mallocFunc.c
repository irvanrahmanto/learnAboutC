#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mallocFuncFirst(){
    int *ptr=malloc(12);
    printf("%d\n", ptr);
}

int mallocFuncSecond(){
    int *arr = malloc(10 * sizeof(int));

    *arr = 100;
    *(arr+1) = 90;
    *(arr+3) = 10;

    printf("%d %d \n %d", *arr, *(arr+3), *(arr+1));
}

int mallocFuncThird(){
    char name[100];
    char *desc;

    strcpy(name, "Irvan Rahmanto");

    //Menghasilkan memori secara dinamis
    desc = malloc(200 * sizeof(char));
    if(desc == NULL){
        fprintf(stderr, "Error - tidak dapat mengalokasikan memori yang diperlukan \n");
    }else{
        strcpy(desc, "Irvan Rahmanto is an Employee in Google");
    }
    printf("Name - %s \n", name);
    printf("Description: %s \n", desc);
}

int callocOne(){
    int *arr = calloc(10, sizeof(int));

    for(int i=0; i<10; i++)
        *(arr+1) = i;

}

int callocTwo(){}

int callocThird(){
    int *ptr_i, i;

//    ptr_i = (int *) calloc();
}

int freeFunc(){}

int funcRealloc(){
    int *arr = malloc(10 * sizeof(int));
    if(arr != NULL){
        *arr=100;
        *(arr + 3)=10;
        printf("%d %d \n", *arr, *(arr + 3));
    }
    arr = realloc(arr, 100*sizeof(int));
    *(arr+45)=56;
    printf("%d %d\n", *arr, *(arr+45));
}

int main(){

    //mallocFuncFirst();
    //mallocFuncSecond();
    //mallocFuncThird();

    funcRealloc();

    return 0;
}
