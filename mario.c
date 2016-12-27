#include <stdio.h>
#include <cs50.h>


int main(void) 
{

    int height;
   
    do 
    {
        printf("Height: ");
        height = GetInt();
    }
    while ((height < 0 || height > 23)); 
   
    int length = height -1;
    int hashN = 2;
    
    for (int i = 0; i < height; i++) 
    {
        for (int space = 0; space < length; space++) 
        {
            printf(" ");
        }
            for (int hash = 0; hash < hashN; hash++) 
            {
                printf("#");
            }
            length--;
            hashN++;
        printf("\n");
    }
}