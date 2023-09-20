// write a program to make a simple calculator using a Switch case statement.

#include<stdio.h>
#include<conio.h>

int main(){

    int sum,sub,div,mul,mod;

    char opr; 
    printf("Enter an operator (+ ,- ,/ ,*,): ");
    scanf("%c",&opr);

    int n1,n2;
    printf("Enter an Number:");
    scanf("%d",&n1);

    printf("Enter an Number:");
    scanf("%d",&n2);



   switch(opr){

       case '+':  sum=n1+n2;
                 printf("%d + %d = %d",n1,n2,sum);
                 break;

       case '-':  sub=n1-n2;
                 printf("%d - %d= %d",n1,n2,sub);
                 break;

       case '*':  mul=n1*n2;
                 printf("%d * %d = %d",n1,n2,mul);
                 break;

       case '/':  div=n1/n2;
                 printf("%d / %d= %d",n1,n2,div);
                 break;

       case '%':  mod=n1%n2;
                 printf("%d % %d= %d",n1,n2,mod);
                 break; 

        default: printf("\n\nEnter proper operator....");
                 break;

   }

}