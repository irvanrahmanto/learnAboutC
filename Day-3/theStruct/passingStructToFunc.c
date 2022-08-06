#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[50];
    int age;
};

void display(struct student s){
    printf("\nPersonal Information\n");
    printf("Name : %s\n", s.name);
    printf("Age : %d", s.age);
}

int main() {

    struct student s1;

    printf("Enter name : ");
    scanf("%[^\n]%*c", s1.name);

    printf("Enter age : ");
    scanf("%d", &s1.age);

    display(s1);

    return 0;
}

