#include <cs50.h>
#include <stdio.h>

int main(void)
{

int startSize;
int endSize;

    do
    {
        startSize = get_int("Population size: ");
    }
    while (startSize < 9);
    do
    {
        endSize = get_int("Ending population size: ");
    }
    while (endSize < startSize);

    int years = 0;
    while (startSize < endSize)
    {
        startSize += (startSize / 3) - (startSize / 4);
        years++;
    }

    printf("Years: %i ", years);

}