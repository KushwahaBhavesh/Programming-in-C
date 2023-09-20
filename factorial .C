// write a program to find factorial of given number.


#include<stdio.h>
#include<conio.h>

int main(){

    int n,fact=1;
    printf ("Enter any integer value:");
    scanf("%d",&n);

    if(n<0){
        printf("Error:!! insert positive number");
    }
    else{
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        printf("Factorial of %d is:%d",n,fact);
    }

}