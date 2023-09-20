// write a program to check given number is odd or even using bitwise operator.

#include<stdio.h>
#include<conio.h>

int main(){

    int num;

    printf("Enter Number:");
    scanf("%d",&num);

    if(num & 1){
        printf("%d is Odd... ",num);
    }
    else{
        printf("%d is Even....",num);
    }
}