#include<stdio.h>
#include<math.h>

// void printhello();   //function_declearation..

// void p_goodbye();   //...........just simple another func declearation..

// void salam();      //.............another function declearation.

// void another_r();    //''''


////////////////////////////////////

int sum(int a, int b);

void table_from_user(int user);

float squareArea(float side);

float circleArea(float redious);

float rectangleArea(float a,float b);
int main(){


    float a = 5.0;

    printf("area is:%f", circleArea(4.3));

    // int n = 8;
    // printf("%f",pow(n,2));
    // // int b;
    // printf("Enter your first number:");
    // scanf("%d",&b);
    // // printf("Enter your second number:");
    // // scanf("%d",&c);

    // table_from_user(b);//..........   //argument/actuall parameter



    // int su = sum(b,c);
    // printf("Your expected result is: %d",su);

    // printf("Select your religion: B for Bangladesh & anythings for other non muslim country.");
    // char user;
    // scanf("%c",&user);

    // if(user=='B'){
    //     salam();
    // }
    // else{
    //     another_r();
    // }

    // salam();


    

    return 0;
}


    float squareArea(float side){
        return side*side;
    }

    float circleArea(float redious){
        return 3.1416*redious*redious;
    }

    float rectangleArea(float a, float b){
        return a*b;
    }

// void table_from_user(int user){//.....// formal parameter.
//     for(int i=1;i<=10; i++){
//         printf("%d\n",i*user);
//     }
// }


// int sum(int a, int b){
//     return a+b;
// }

// void printhello(){      //function_defination
//     printf("Hi gyse\n");
//     printf("I hope your all done\n");

// }

// void p_goodbye(){
//     printf("Okey good bye!\n");
// }


// void salam(){
//     printf("Asslamu alaikum\n");
//     another_r();
// }

// void another_r(){
//     printf("You have to follow the Islam\n");
// }