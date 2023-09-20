// write a program to convert fehrenheit to Celsiucs

#include<stdio.h>
#include<conio.h>

int main(){
    
    float c,f;

    printf("Enter Temperature in Fehrenheit:");
    scanf("%f",&f);

    c=(f-32)*5/9;

    printf("%2f Fehrenheit= %.2f C",f,c);
}