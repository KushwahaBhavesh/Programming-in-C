// write a program using Logical Operator.

#include<stdio.h>
#include<conio.h>

int main(){

    int a=5, b=6, c=7;
    int result;

    result=((a==b)&&(c>b));
    printf("(a==b)&&(c>b) is %d\n",result);

    result=((a==b)&&(c<b));
    printf("(a==b)&&(c<b) %d\n",result);

    result=((a==b)||(c>b));
    printf("(a==b)||(c>b) %d\n",result);

    result=((a!=b)||(c<b));
    printf("(a!=b)||(c<b) %d\n",result);

    result=(!(a != b));
    printf("!(a != b) %d\n",result);

    result=(!(a==b));
    printf("!(a==b) %d\n",result);

}