// Pattern :
// *
// **
// ***
// ****

#include <stdio.h>
#include <conio.h>

int main()
{

    int size;
    printf("Enter Size of pattern:");
    scanf("%d", &size);

    // printing pattern
    for (int i = 0; i <=size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}



// 