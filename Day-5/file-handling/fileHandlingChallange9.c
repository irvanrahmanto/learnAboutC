#include <stdio.h>
#include <stdlib.h>

void luasSegitiga(){
    int alas, tinggi, area;
    printf("Inputkan alas : ");
    scanf("%d", &alas);

    printf("Inputkan tinggi : ");
    scanf("%d", &tinggi);

    area=((0.5)*alas*tinggi);
    printf("Luas segitiga dengan alas %d cm dan tinggi %d cm adalah: %d cm2 \n", alas, tinggi, area);

    //Memasukan hasil ke dalam file txt
    FILE *out=fopen("challangepart9.txt", "a");
    fprintf(out, "Alas segitiga : %d cm \n", alas);
    fprintf(out, "Tinggi segitiga: %d cm \n", tinggi);
    fprintf(out, "Luas segitiga dengan alas %d cm dan tinggi %d cm adalah: %d cm2", alas, tinggi, area);
    fclose(out);
    printf("Sukses menambahkan data! \n");
}

void kelilingSegitiga(){
    int side, keliling;
    printf("Inputkan sisi: ");
    scanf("%d", &side);

    keliling=side+side+side;
    printf("Keliling segitiga adalah : %d \n", keliling);
}


void main(){
    //kelilingSegitiga();

    luasSegitiga();
    return 0;
}
