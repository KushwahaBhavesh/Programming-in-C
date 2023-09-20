//write a program to check whether entered number is odd or Even.

#include<stdio.h>
#include<conio.h>

int main(){

    int num;

    printf("Enter Number:");
    scanf("%d",&num);

    if(num%2==0){
        printf("%d is Even",num);
    }
    else{
        printf("%d is Odd",num);
    }

}