#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) 
{
    int quarterValue = 25;
    int dimeValue = 10;
    int nickelValue = 5;
    int pennyValue = 1;
    int numCoins = 0;
    float change;
    do 
    {
        printf("O hai! How much change is owed?\n");
        change = GetFloat();
    }
    while (!(change > 0.0));
    int changeRound = round(change * 100);
    while (changeRound > 0) 
    {
        if (changeRound >= quarterValue)
        {
            changeRound = changeRound - quarterValue;
            numCoins++;
        }
        else if (changeRound >= dimeValue) 
        {
            changeRound = changeRound - dimeValue;
            numCoins++;
        }
        else if (changeRound >= nickelValue) 
        {
            changeRound = changeRound - nickelValue;
            numCoins++;
        }
        else if (changeRound >= pennyValue) 
        {
            changeRound = changeRound - pennyValue;
            numCoins++;
        }
    }
    printf("%d\n", numCoins);
    return 0;
}