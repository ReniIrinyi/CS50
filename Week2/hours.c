#include <cs50.h>
#include <ctype.h>
#include <stdio.h>


float calc_hours(int hours[], int weeks, char output);

int main(void)
{

    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];


    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);

    }

    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');

    printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

float calc_hours(int hours[], int weeks, char output)
{

    float sumOfHours=0.0;
    
    int size=0;
    for (int i = 0; i < weeks; i++)
    {
        size++;

    }
    for(int i=0; i<size; i++){
        sumOfHours+=(float)hours[i];
         printf("sumOfHours: %f hours: %d\n", sumOfHours, hours[i]);
    }

    if(output==84){
        return sumOfHours;
    } else if(output==65){
        float avg=sumOfHours/size;
        return avg;
}
    return 0;
}