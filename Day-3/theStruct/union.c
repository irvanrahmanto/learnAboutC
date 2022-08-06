#include <stdio.h>

union{
    int a,b;
    int b;
}x;

union{
    int c;
    char d;
}y;

void main(){

    x.a = 10;
    printf("nilai a adalah %d\n", x.a);
    printf("nilai b adalah %d\n\n", x.b);

    //jika nilai b diganti maka a juga berubah
    x.b = 20;
    printf("nilai a adalah %d\n", x.a);
    printf("nilai b adalah %d\n\n", x.b);

    //jika tipe berbeda nilai tidak terganti
    y.c = 100;
    y.d = 'd';
    printf("nilai c adalah %d\n", y.c);
    printf("nilai d adalah %c\n\n", y.d);

    return 0;
}
