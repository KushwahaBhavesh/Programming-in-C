// write a program to check the entered character is an alphabets ,digit,or special symbols.

#include<stdio.h>
#include<conio.h>

int main(){

    char c;
    printf("Enter any charachter:");
    scanf("%c",&c);

    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        printf("%c is alphabet....",c);
    }
    else if(c>='0' && c<='9' ){
        printf("%c is Digit....",c);
    }
    else{
        printf("%c is symbol...",c);
    }

}

