// write a program to print the prime number from 1 to n number.

#include<stdio.h>
#include<conio.h>

int main(){

    int n,flag=1,i,j;
    printf("Enter any integer value:");
    scanf("%d",&n);   

    printf("Prime number are ....\n");
    for (i = 2; i <=n; i++)
    {
        for (  j = 2; j <=i/2; j++)
        {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
        }
           if(flag==1)
             {
                  printf("%d\n",i);
             } 
    }
 
  
}