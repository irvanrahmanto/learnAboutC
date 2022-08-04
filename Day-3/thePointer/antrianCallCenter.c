#include <stdio.h>
#include <stdlib.h>

void callCenter(){
    char antrian[] = {'A', 'B', 'C', 'D', 'E'};
    int size = sizeof antrian / sizeof antrian[0];
    int *pointerAntrian;

    printf("== Program Call Center Line Bank ==\n");
    for(int i = 0; i < size; i++){
        pointerAntrian = &antrian[i];
        printf("Pelanggan dengan no antrian %c silahkan ke Loket!\n",*pointerAntrian);
        printf("Saat ini Call Center Line Bank sedang melayani: %c\n", *pointerAntrian);
        printf("=== Tekan Enter untuk Next ===");getchar();
        pointerAntrian++;
    }
    printf("Selesai");
}

void theMainFinal(){
    callCenter();
    return 0;
}
