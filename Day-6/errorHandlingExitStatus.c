#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr_i, i;

    ptr_i = (int *) calloc(4, sizeof(int));
    for(i=0; i<4; i++){
        ptr_i[i]=1;
    }
    for(i=0; i<4; ++i){
        printf("%d", ptr_i[i]);
    }
    return 0;
}
