// write a program to find sum of 1 to n Number.

#include<stdio.h>
#include<conio.h>

int main(){

    int n,i,sum=0;

    printf ("Enter any integer value:");
    scanf("%d",&n);

    for(i=0;i<=n;i++){

        sum=sum+i;

    }
    printf(" sum of %d is:%d ",n,sum);


}