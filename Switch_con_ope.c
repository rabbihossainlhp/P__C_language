#include<stdio.h>
int main(){
    int day;  //like:: 1-saturday , 2-sunday, 3, monday....etc
    printf("Enter a number from 1-7 for finding day:");
    scanf("%d",&day);


    switch(day){
        case 1 : printf("Satarday\n");
                break;
        case 2 : printf("Sunday\n");
                break;
        case 3 : printf("Monday\n");
                break;
        case 4 : printf("Tuesday\n");
                break;
        case 5 : printf("Wednesday\n");
                break;
        case 6 : printf("Tursday\n");
                break;
        case 7 : printf("Friday\n");
                break;
        default : printf("The input number did not match with any day");

}



// Another taste with charecters................


char day_n;  //like:: 1-saturday , 2-sunday, 3, monday....etc
    printf("Enter First latter of the day for finding day:");
    scanf("%c",&day_n);


    switch(day_n){
        case 'S' : printf("Satarday\n");
                break;
        case 's' : printf("Sunday\n");
                break;
        case 'M' : printf("Monday\n");
                break;
        case 'T' : printf("Tuesday\n");
                break;
        case 'W' : printf("Wednesday\n");
                break;
        case 't' : printf("Tursday\n");
                break;
        case 'F' : printf("Friday\n");
                break;
        default : printf("The input number did not match with any day");
    return 0;
}

}