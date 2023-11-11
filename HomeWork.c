#include<stdio.h>
int main(){

/*First problem: write a program to print the average of 3 number.
 
 Second problem: write a program to check if given character is
 digit or not.

 Third problem: write a program to print the smallest number.
*/    


//..........Problem 1

    int first_number;
    int second_number;
    int third_number;
    printf("Enter the number serialy:");
    scanf("%d",&first_number);
    printf("Enter the number serialy:");
    scanf("%d",&second_number);
    printf("Enter the number serialy:");
    scanf("%d",&third_number);
    printf(" Your result is = %d\n",(first_number+second_number+third_number)/3);


// try to another one.

    char charecters ;
    printf("just drop your char value:");
    scanf("%d",&charecters);

////................>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    if(charecters >= 'A' && charecters <= 'Z'){
        printf("Upper case");
    }

    else if (charecters >= 'a' && charecters <= 'z'){
        printf("lower case");
    }

    else {
        printf("not a charecters of eng.");
    }

    return 0;
}