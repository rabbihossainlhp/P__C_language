#include<stdio.h>
int main(){
    double First_number ;
    double Second_nummber;
    char Operator;

    printf("Select an operator(+,-,*,/):");
    scanf("%c",&Operator);
    printf("First_number:");
    scanf("%lf",&First_number);
    printf("Second_number:");
    scanf("%lf",&Second_nummber);
    
    

    switch(Operator){
        case '+': printf("%lf",First_number+Second_nummber);
                break;
        case '-': printf("%lf",First_number-Second_nummber);
                break;
        case '*': printf("%lf",First_number*Second_nummber);
                break;
        case '/': printf("%lf",First_number/Second_nummber);
                break;
        default : printf("Invalid Operator.");
    }

    return 0;
}