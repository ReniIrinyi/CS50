#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    char array[strlen(input)];
    for(int y=0; y<strlen(input); y++){
    for(int i=strlen(input); i>0; i--){
        if(i==0){
            array[strlen(input)-1]=input[0];
            return 0;
        } else {
            array[y]=input[i];
            convert(input);
        }
    }
    }
    return array;

}