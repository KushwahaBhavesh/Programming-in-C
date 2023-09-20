// write a program to swap two number without using third variable

#include<stdio.h>
#include<conio.h>

int main(){

    int x,y;
    
      printf("Enter the value of X: ");
    scanf("%d",&x);

    
    printf("Enter the value of Y: ");
    scanf("%d",&y);

    printf("Before Swap \n X:%d & Y:%d",x,y);

//Logic.......
    x=x+y;
    y=x-y;
    x=x-y;

    printf("\nAfter Swap \n X:%d & Y:%d",x,y);
}
