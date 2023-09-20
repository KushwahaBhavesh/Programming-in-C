// write a program to convert Uppercase uppercase letter into lowercase letter

#include<stdio.h>
#include<conio.h>
 int main(){

    char ch;
    printf("Enter the Character:");
    scanf("%c",&ch);

    ch=ch+32;
    printf("Character in LowerCase:%c",ch);

}