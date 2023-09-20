/* Write a program to find circumference of circle */

#include<stdio.h>
#include<conio.h>
#define pi 3.14

int main(){
    float r,c;
    printf("Enter Radius: ");
    scanf("%f",&r);

    c=2*pi*r;
    printf("Circumference of circle: %f",c);
}