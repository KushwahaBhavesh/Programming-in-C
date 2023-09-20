//write a program to demnostrate the use of MOD(Reminder) 

#include<stdio.h>
#include<conio.h>

int main(){

    int x1,x2;
    printf("Enter the value of X1: ");
    scanf("%d",&x1);

    
    printf("Enter the value of X2: ");
    scanf("%d",&x2);

    int div=x1/x2;
    int reminder=x1%x2;

    printf("Quoitent=%d & Reminder=%d",div,reminder);
}
