// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    bool islower= false;
    bool isupper= false;
    bool isdigit= false;
    bool issymbol= false;

    for(int i=0; i<strlen(password); i++){
        if(isupper(password[i]))
        {
            islower=true;
        }

        if (islower(password[i]))
        {
            isupper=true;
        }

        if (isdigit(password[i]))
        {
            isdigit=true;
        }

        if (password[i]>32 && password[i]<48)
        {
            issymbol=true;
        }
    }


    return islower && isupper && isdigit && issymbol ? true : false;


}
