//write a program to find maximum number out of three numbers using if else statement .

#include<stdio.h>
#include<conio.h>

int main(){

    int x, y, z;

    printf("Enter number x:");
    scanf("%d",&x);

    printf("Enter number y:");
    scanf("%d",&y);
    
    printf("Enter number z:");
    scanf("%d",&z);

    if(x>y){
        if(x>y){
             printf("%d is maximum....",x);
        }
        else{
             printf("%d is maximum....",y);
        } 
    
    }
    else{
        if (y>z)
        {
             printf("%d is maximum....",y);
        }
        else{
             printf("%d is maximum....",z);
        }
        
    }

}