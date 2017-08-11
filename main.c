#include <stdio.h>


int main() {


    int integer1, integer2 ,sum;

    double  num1 ,  num2,  div;

    //int integer1;
    //int integer2;
    //int sum;

    //printf("hello, world!\n");
    //printf("hello,");
    //printf("world\n");

    // while true in c is with while(1){} xd


    printf("enter first num1r\n");
    scanf("%lf", &num1);

    printf("enter seconf num2\n");
    scanf("%lf", &num2);

    div = num1 / num2;

    printf("div is %f\n", div);
    //printf("%d",sum);

    printf("enter first integer\n");
    scanf("%d", &integer1);

    printf("enter seconf integer\n");
    scanf("%d", &integer2);

    sum = integer1 + integer2;

    printf("sum is %d\n", sum);



    return 0;
}