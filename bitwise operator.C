// write a program using a bitwise operator.

#include<stdio.h>
#include<conio.h>

int main(){

    int n1=40, n2=50, AND,OR,XOR;

    AND=(n1&n2);
    printf("AND operator value is:%d\n",AND);

    OR=(n1|n2);
    printf("OR operator value is:%d\n",OR);

    XOR=(n1^n2);
    printf("XOR operator value is:%d\n",XOR);

    printf("Left Shift value is:%d\n",n1<<1);
    printf("Right Shift value is:%d\n",n2>>1);

}