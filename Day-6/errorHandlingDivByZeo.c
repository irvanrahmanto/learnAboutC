#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void){
    int dividen=10;
    int pembagi=0;
    int hasil;

    if(pembagi==0){
        fprintf(stderr, "Pembaginya nol! Exit program . . . \n");
        exit(EXIT_FAILURE);
    }

    hasil=dividen/pembagi;
    fprintf(stderr, "Hasil bagi : %d \n", hasil);
    exit(EXIT_SUCCESS);
}
