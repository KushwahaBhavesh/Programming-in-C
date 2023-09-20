// Write a program to find volume of cube

#include<stdio.h>
#include<conio.h>

int main(){

    float height,width,length,volume;           //declaration staement

    printf("Enter value of Length:");           //Length
    scanf("%f",&length);

    printf("Enter value of Height:");            //Height
    scanf("%f",&height);

    printf("Enter value of Width:");              //Width
    scanf("%f",&width);

    volume = length * height * width;               //implementation statement

    printf("Volume of Cube:%f",volume);

}