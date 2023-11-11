#include<stdio.h>
int main(){
    int age ;
    printf("Enter your age:");
    scanf("%d",&age);

    age>=18? printf("Adult\n"):printf("Child\n");

    /*We can use this ternary operator in any single line condition
                not any multiple line condition
                            in any multiple line condition, we have to 
                                         the if-else condional statements....*/
    
    return 0;
}