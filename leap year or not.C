// write a program to check entered year is leap year or not.

#include<stdio.h>
#include<conio.h>

int main(){

    int year;
    printf("Enter a year:");
    scanf("%d",&year); 

    if(year%4==0){

        if(year%100==0){

            if (year%400==0){
                   printf("%d is leap year...",year);
            }
            else{
                 printf("%d is not leap Year...",year);
            } 
        }
        else{
            printf("%d is leap Year...",year);
        }
    }
    else{
         printf("%d is not leap Year...",year);
    }

}