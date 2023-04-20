#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
string words="Hallo Adam Reni vagyok";

    int ascii[strlen(words)];
    int binary[8];

    for (int i  = 0; i < strlen(words); i++)
    {
        ascii[i] = (int) words[i];
        // printf("CHAR: %c\n", words[i]);
        // printf("ASCII:  %i\n", ascii[i]);
        // printf("BINARY: \n");
    }

    for (int i = 0; i < strlen(words); i++)
    {
        for (int b = 0; b < 8; b++)
        {
            if (ascii[i] % 2 == 0)
            {
                binary[b] = 0;
            }
            else
            {
                binary[b] = 1;
            }
            ascii[i] = ascii[i] / 2;
        }

        for (int i = 7; i >= 0; i--)
        {
            print_bulb(binary[i]);
            //  printf("%i", binary[i]);
        }



    }
        printf("\n");
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
