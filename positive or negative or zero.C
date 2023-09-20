//writea program to check wthe entered number is positive or negative or zero.

#include<stdio.h>
#include<conio.h>

int main(){

    int num;

    printf("Enter number:");
    scanf("%d",&num);

    if(num<=0){
        if (num==0)
        {
            printf("you Entered Zero...");
        }else{
            printf("%d number is negative....",num);
        }
    }else{
        printf("%d is Positive...",num);
    }

}