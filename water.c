#include <stdio.h>
#include <cs50.h>

int main(void) {
    printf("Length of shower: ");
    int showerLength = GetInt();
    int numOfBottles = showerLength * 192 / 16;
    printf("minutes: %i\n", showerLength );
    printf("bottles: %i\n", numOfBottles );
}