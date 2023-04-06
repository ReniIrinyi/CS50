#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
 int min;

    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {

            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    bool isTrue=true;

    if(number==2 || number== 3){
    isTrue=true;
    } else {

 if(number %2 == 0 || number %3==0 || number%5==0 || number%7==0){
    isTrue=false;
    }

    if(number==1 ){
    isTrue=false;
    }
    }

return isTrue;

}
