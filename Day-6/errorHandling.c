#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

extern int errno;

int main(){
    FILE * fp;
    fp = fopen("not_exist_file.txt", "rb");
    if(fp==NULL){
        fprintf(stderr, "Value of errno: %d\n", errno);
        fprintf(stderr, "Error opening the file: %s \n", strerror(errno));
        perror("Error printed by perror");
    }else{
        fclose(fp);
    }
    return 0;
}
