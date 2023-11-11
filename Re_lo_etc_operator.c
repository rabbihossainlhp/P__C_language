#include<stdio.h>
int main(){
    printf("%d\n",5!=5);  //I think it will return 0 (false.)
    printf("%d\n",5==5);  //I think it will return 1 (true.)
    printf("%d\n",5>5);   //I think it will return 0 (false.)
    printf("%d\n",5<5);   //I think it will return 0 (false.)
    printf("%d\n",5<=5);  //I think it will return 1 (true.)
    printf("%d\n",5>=5);  //I think it will return 1 (ture.)

//......now we will see some the logical Operators 

    printf("%d\n",(5<4)&&(5<7));// It will return 0(false.)
    printf("%d\n",(5<4)||(5<7));// It will return 1(true.)
    printf("%d\n",!(5<7));      // It will return 1(true.)


//....some of 'Assignment operator'

    int a = 3;
    int b = 4;
    a -= b;
    printf("%d\n ",a);

//......solve simple question.

    int m;
    printf("Enter a number:");
    scanf("%d",&m);
    printf(" The result is:%d\n", m%2==0);

//........another one..

    int is_sunday = 1;
    int is_snowing = 1;
    printf("%d\n",is_sunday&&is_snowing);

    int is_monday = 1;
    int is_raining = 0;
    printf("%d\n",is_monday||is_raining);

//......another one..

    int aa;
    printf("Enter a number for checking:");
    scanf("%d",&aa);
    printf("see the result:%d",aa>9 && aa<100);

    return 0;
}