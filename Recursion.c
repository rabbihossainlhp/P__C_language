#include<stdio.h>


void P_hello(int count);

int sum(int n);

int fact(int x);

float convertTem(float celsius);

int GeneratePercentage(int since, int math, int history);  //..This is also another problem's solution functioni.

int fibo(int n);

int fibonacci(int x);///Actually this is a homework;

int main(){

    fibonacci(7);










    // printf("%d",fibo(6));
    // int since = 40;
    // int history = 50;
    // int math = 67;

    // int result_int_P = GeneratePercentage(since,math,history);
    // printf("Your result is:%d ",result_int_P);

    // printf(" Farhenite is: %f", convertTem(37));
    // printf("sum is: %d",fact(5));
    // P_hello(15);
    return 0;
}



int fibonacci(int n){  //...........actually this was a problem.
    int first=0;
    int second=1;
    int add = 0;

    for ( int i=0; i<=n; i+=1){
        if(i<=1){
            add= i;
        }else{
           add = first+second;
           first = second;
           second = add;
           
        }
    }   printf("fibonacci is:%d",add);

    printf("\n");
}






int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fib1 = fibo(n-1);
    int fib2 = fibo(n-2);
    int fib = fib1+fib2;
   // printf("fibonacci of %d is: %d\n",n,fibo);
    return fib;
}


int GeneratePercentage(int since, int math, int history){    //..This is also another problem's solution functioni.
    int addition = since+math+history;
    int divide = addition/3;
    int multiplication_f = divide;
    return multiplication_f;
}


//one more same problem of recursion;
int fact(int x){
    if(x==1){
        return 1;
    }
    int fact_o_m1 = fact(x-1);
    int actual_fact = fact_o_m1*x;
    return actual_fact;

}




float convertTem(float celsius){      //.......this is also a question for practice
    int farhenite = celsius*(9.0/5.0 )+ 32;
    return farhenite;
}


int sum(int n){
    if(n==1){
        return 1;
    }
    int Sum_o_n_1 = sum(n-1);
    int sum_of_N = Sum_o_n_1+n;
    return sum_of_N;
}

void P_hello(int count){
    if(count == 0){
        return;
    }

    printf("Hello world\n");
    P_hello(count-1);
}