//Write a program to find Average of the three numbers

#include<stdio.h>
#include<conio.h>

int main(){

    int x1,x2,x3;

    printf("Enter the value of First number:");
    scanf("%d",&x1);

    printf("Enter the value of Second number:");
    scanf("%d",&x2);
    
    printf("Enter the value of Third number:");
    scanf("%d",&x3);

    float avg=(x1+x2+x3)/3;

    printf("Average of the three Number is :%f",avg);
}