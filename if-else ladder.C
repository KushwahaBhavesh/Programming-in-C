// write a program to calculate a grade on the basis of marks as per gtu grading system using if-else ladder.

#include<stdio.h>
#include<conio.h>

int main(){

    int marks;

    printf("Enter your Marks:");
    scanf("%d",&marks);

    if(marks<0 || marks>100){
        printf("wrong Entry... ");
    }
    else if(marks>=85 && marks<=100){
        printf("Grade AA");
    }
    else if(marks>=75 && marks<=84){
        printf("Grade AB");
    }
    else if(marks>=65 && marks<=74){
        printf("Grade BB");
    }
    else if(marks>=55 && marks<=64){
        printf("Grade BC");
    }
    else if(marks>=45 && marks<=54){
        printf("Grade CC");
    }
    else if(marks>=35 && marks<=44){
        printf("Grade CD");
    }
    else if(marks>=25 && marks<=34){
        printf("Grade DD");
    }
    else {
        printf("You are Fail...");
    }
}