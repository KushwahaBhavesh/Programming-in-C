//write a program to find odd number from N numbers.

#include<stdio.h>
#include<conio.h>

int main(){
 
    int odd,n;
    printf ("Enter any integer value:");
    scanf("%d",&n);

    
    if(n>0){
        printf("odd number is:\n");
        for(int i=1;i<n;i++){
              if(i%2!=0){
                     printf("%d\n",i);
              }
        }
    }
    else{
        printf("Enter positive value....");
    }

}