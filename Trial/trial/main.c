#include <stdio.h>
#include <stdlib.h>

//Create function for if else
void isCheckSound(){
    int a;

    //input
    printf("Input your number : \n");
    scanf("%d", &a);

    if(a == 0){
        printf("Door!");
    }else{
        printf("Cool!");
    }
}

void isCheckKabisatYear(){
    int yourYear;

    printf("Masukkan tahun : \n");
    scanf("%d", &yourYear);

    if(yourYear % 4 == 0){
        printf("%d Merupakan tahun kabisat \n ", yourYear);
    }else if(yourYear % 100 == 0){
        printf("%d Bukan merupakan tahun kabisat \n", yourYear);
    }else{
        printf("%d Bukan merupakan tahun kabisat \n", yourYear);
    }
}

void isCheckValue(){
    int x;

    printf("Input nilai anda :  \n");
    scanf("%d", &x);

    if((x >= 60) && (x !=0 )){
        printf("LULUS");
    }else{
        printf("TIDAK LULUS");
    }
}

//function for switch case example
void isSwitchCase(){

    int choice;

    printf("Selamat datang di Hactiv8 Restaurant : \n");
    printf("Menu Makanan \n");
    printf("1. Nasi Padang \n");
    printf("2. Mie Aceh \n");
    printf("3. Nasi Gudeg Yogyakarta \n");

    //int inpOption;
    printf("Masukkan pilihan anda (1,2,3) : \n");
    choice = isInput();
    //scanf("%d", &inpOption

    switch(choice){
        case 1: {
            printf("Your Nasi Padang is success order! \n");
            break;
        }

        case 2: {
            printf("Your Mie Aceh is success order! \n");
            break;
        }

        case 3: {
            printf("Your Nasi Gudeg Yoga is success order! \n");
            break;
        }

        default:
            printf("not available! wrong input! \n");
    }

}

void isInput(){
    int numbs;
    scanf("%d", &numbs);
    return(numbs);
}

void main(){
    /*
    //Initialization for variable
    int x = 21;
    int y = 17;
    int result;

    printf("----------------------xxxxxxxxxx------------------------ \n");
    x = x-5;
    printf("Result for calculation X is :  %d\n ", x);

    y = y+3;
    printf("Result for calculation Y is : %d\n ", y);
    */

    //isCheckSound();

    //isCheckValue();

    //isCheckKabisatYear();

    isSwitchCase();

    return 0;
}
