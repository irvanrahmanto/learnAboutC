#include <stdio.h>
#include <stdlib.h>

void myLoopFor(){
    int i;
    int j;
    int inp;

    char words;

    printf("Inputkan nilai awal loop : \n");
    scanf("%d", &inp);

    printf("Inputkan nilai akhir loop : \n");
    scanf("%d", &j);
/*
    printf("Inputkan karakter yg mau di loop : \n");
    scanf("%c", &words);
*/
    for(i=j; i<inp; i++){
        //printf("Loop is : %c \n", words);
        printf("%d Looping menggunakan for! \n");
    }
}

void myLoopWhile(){
    int inp;
    char y;

    printf("Inputkan mau loop berapa kali : \n");
    scanf("%d", &inp);
    int i=0;
    while(i < inp){
        printf("Input string yg mau anda looping : \n");
        scanf("%d", &y);
        printf("The looping : %c \n", y);
        //y++;
    }
}

void theLoopModifiedGenap(){
    int awal, akhir, i;

    printf("Masukkan nilai awal loop : \n");
    scanf("%d", &awal);

    printf("Masukkan nilai akhir loop : \n");
    scanf("%d", &akhir);

    /*
    for(i=awal; i<akhir; i++){
        if(i % 2 == 0){
            printf("%d Merupakan bilangan genap \n", i);
        }
    }
    */

    for(i=awal; i<akhir; i+=2){
        printf("%d Deret bilangan nya : ", i);
    }
}

void loopWhileModified(){
    int i=0;
    while(i != 99){
        printf("Masukkan sebuah bilangan : ");
        scanf("%d", &i);
        printf("Bilangan anda adalah : \n", i);
    }
}

void loopWhileUsrInp(){
    int i=0;
    int inp;
    char words;

    printf("Inputkan mau berapa kali looping : ");
    scanf("%d", &inp);

    while(i<inp){
        printf("Inputkan karakter yg ingin di loop : \n");
        scanf("%c", &words);
        printf("Loop nya : %c \n", words);
        i++;
    }
}

void tryWhile(){
    int i=0;
    while(i<5){
        printf("I'm so happy to learn C programming \n");
        i++;
    }
}

void nestedLoop(){
    int x;
    int y;
    int inp1, inp2, inp3;

    printf("(For Luar)Inputkan X awal : ");
    scanf("%d", &inp1);

    printf("(For Luar)Inputkan X akhir : ");
    scanf("%d", &inp2);

    printf("(For dalam) Inputkan X : ");
    scanf("%d", &inp3);

    for(x=inp1; x<=inp2; x++){
        for(y=inp3; y<=x; y++){
            printf(" ");
            printf("%d", x*y);
            printf(" ");
        }
        printf("\n");
    }
}

void countNumber(){
    int i,inp,bil;
    int total=0;

    printf("Inputkan perulangan : ");
    scanf("%d", &inp);

    for(i=1; i<inp; i++){
        printf("Inputkan bilangan ke-%d : ", i);
        scanf("%d", &bil);
        total = total+bil;
    }
    printf("Hasilnya adalah : %d \n", total);
}

int test2()
{
    // input	user input -- hopefully a number
	// temp		used to collect garbage characters
	// status	did the user enter a number?
	int input, temp, status;

	printf("Please enter a number: ");
	status = scanf("%d", &input);
	while(status!=1){
		while((temp=getchar()) != EOF && temp != '\n');
		printf("Invalid input... please enter a number: ");
		status = scanf("%d", &input);
	}

	printf("Your number is %d\n",input);
	return 0;
}
int test3()
{
    int num;
    char term;
    printf("Please enter an integer number: ");
    for (;;) {
      if(scanf("%d%c", &num, &term) != 2 || term != '\n') {
          printf("Failure. Please enter an integer number: ");
          int c;
          while (('\n' != (c=fgetc(stdin))) && (c != EOF));   // clear up to end of line
          if (c == EOF) break;     // do not read past EOF...
      }
      else {
          printf("\nvalid integer followed by enter key: %d", num);
          break

void tinggiBintang(){
    int i,j,tinggi;

    printf("Inputkan tinggi : \n");
    scanf("%d", &tinggi);

    for(i=1; i<tinggi; i++){
        for(j=0; j<tinggi; j++){
            if(j<1 || j == tinggi-1){
                printf("*");
            }else if(i == (tinggi/2)+1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    //Tinggal menyalakan saja function nya
    //myLoopFor();
    //myLoopWhile();
    //theLoopModifiedGenap();
    //loopWhileModified();
    //loopWhileUsrInp();
    //tryWhile();
    //nestedLoop();
    //countNumber();

    tinggiBintang();

    return 0;
}
