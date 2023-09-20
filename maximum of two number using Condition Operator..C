//Write a Program to find the maximum of two number using Condition Operator.

#include<stdio.h>
#include<conio.h>

int main(){

    int num1,num2;

    printf("Enter the value of Num1: ");
    scanf("%d",&num1);

    
    printf("Enter the value of Num2: ");
    scanf("%d",&num2);

    int max=(num1 > num2)?num1:num2;

    printf("Maximum out of two number is :%d",max);

}