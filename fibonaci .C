//write a program to find fibonaci series up to n number.

#include<stdio.h>
#include<conio.h>

int main(){

    int n,next;
    printf("Enter any integer value:");
    scanf("%d",&n);

    printf("febonaci Series of %d is:",n);
    int x1=0, x2=1;

    for(int i=1;i<=n;i++){

        printf("%d \n",x1);
        next=x1+x2;
        x1=x2;
        x2=next;

    }

}