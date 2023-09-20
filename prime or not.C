// write a program to check entered number is prime or not.

#include<stdio.h>
#include<conio.h>

int main(){

    int n,flag=0;
    printf("Enter any integer value:");
    scanf("%d",&n);


    if(n==1){
        printf("1 is not a prime or not a Composite number....");
    }
    else{
        for(int i=2;i<=n/2;i++){
              if(n%i==0){
                   flag=1;
                   break;
              }
        }

        if(flag==0){
              printf("%d is Prime Number",n);
        }
        else{
              printf("%d is not a prime number",n);
        }
    }
}