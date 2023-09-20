//Write a program to swap two numbers using third variable

#include<stdio.h>
#include<conio.h>

int main(){

    int x,y,temp;
    
      printf("Enter the value of X: ");
    scanf("%d",&x);

    
    printf("Enter the value of Y: ");
    scanf("%d",&y);

    printf("Before Swap \n X:%d & Y:%d",x,y);

    temp=x;
    x=y;
    y=temp;

    printf("\nAfter Swap \n X:%d & Y:%d",x,y);


}