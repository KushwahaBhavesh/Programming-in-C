//write a program to find maximum number out of two integer.

#include<stdio.h>
#include<conio.h>

int main(){

    int x , y;

    printf("Enter number 1:");
    scanf("%d",&x);

    printf("Enter number 2:");
    scanf("%d",&y);
    
    if (x==y){
        printf("Given number is equal...");
    }
    else{
        int largest=((x>y)?x:y);
        printf("%d is largest",largest);
    }
}