
#include<stdio.h>
int main(){
    int Marks;
    printf("Enter marks:");
    scanf("%d",&Marks);

    if(Marks>=0 && Marks <=30){
        printf("Fail in the exam.\n");
    }
    else if (Marks > 30 && Marks <=100 ){
            printf("Pass in the exam.\n");
    }
    else{
        printf("wrong marks that you given\n");
    }


    //Marks>=30? printf("Pass\n"):printf("Fail\n");

    
    return 0;
}