#include<stdio.h>
int main(){
    int age = 19;
    printf("Enter age:");
    scanf("%d",&age);

    if (age >= 18){
        printf("He is adult now\n");
        printf("He can drive from now\n");
        printf("He can vote from now\n");
        printf("He can marry now\n");
    }

    else if ( age< 18 && age> 13){
        printf("Tenager,,,,\n");
    }

    else{
        printf("actually he stil child not an adult person");
        printf("He has to maintain all restriction");
    }

//......another taste.......



    return 0;
}