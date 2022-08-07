#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct BinaryConvert {
    int theBinaryConvert;
    struct BinaryConvert *next;
} *head, *current;

void thePushHead(int theBinaryConvert){
    current=(struct BinaryConvert*)malloc(sizeof(struct BinaryConvert));
    current->theBinaryConvert=theBinaryConvert;

    current->next=NULL;

    if(head==NULL){
        head=current;
    }else{
        current->next=head;
        head=current;
    }
}

void thePop(){
    while(head != NULL){
        current=head;
        head=head->next;
        free(current);
    }
}

void printResult(){
    current=head;
    if(current != NULL){
        print("Hasil Convert <pop head> : \n");
        while(current != NULL){
            printf(" %d", current->theBinaryConvert);
            current=current->next;
        }
    }else{
        printf("Data no available! \n");
    }
}

void displayMenu(){
    back:
    printf("|--------------------------------------|\n");
    printf("|        Convert Data ke Biner         |\n");
    printf("|--------------------------------------|\n");
    printf("\n");
    int inpData;
    printf("Masukkan Data [1-100000] : ");
    fflush(stdin);
    scanf("%d", &inpData);

    int i;
    int resultModCalculation;
    int dividedResult;

    for(i=0; i<8; i++){
        if(inpData >= 0 && inpData != 0){
            resultModCalculation = inpData % 2;
            dividedResult = inpData/2;
            printf("%d %% 2 = %d -> Push Head \t\t Nilai data = %d \n",inpData, resultModCalculation, dividedResult);
            thePushHead(resultModCalculation);
        }else{
            printf("Bilangan tidak boleh 0! \n");
        }
    }
    printResult();
    getchar();
    printf("\n");

    char repeatInp;

    do{
        printf("Ingin mengulang [Y/N] ? ");
        scanf("%s", &repeatInp);
        if(repeatInp == 'Y' || repeatInp == 'y'){
            thePop();
            goto back;
        }else if(repeatInp == 'N' || repeatInp == 'n'){
            printf("\n");
            printf("Terimakasih! sampai jumpa kembali \n");
            printf("\n");
        }else{
            printf("Cannot understand \n");
            return 0;
        }
    }while(repeatInp != 'Y' && repeatInp != 'y' && repeatInp != 'N' && repeatInp != 'n');
}

int main()
{
    displayMenu();
    return 0;
}

