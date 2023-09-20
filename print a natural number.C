//write a program to print a natural number from 1 to N using while loop.

#include<stdio.h>
#include<conio.h>

int main(){

    int n,i=1;

    printf ("Enter any integer value:");
    scanf("%d",&n);

    while(i<=n){
        printf("%d\n",i);
        i++;
    }

}