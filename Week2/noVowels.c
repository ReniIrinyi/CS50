// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch
#include <string.h>
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

string replace(string input);


int main(int argc, string argv[])
{

printf("STRING: %s; REPLACED: %s\n", argv[1], replace(argv[1]));

}

string replace(string input){
  string output=input;

  for(int i=0; i<strlen(input); i++){
     char c=tolower(input[i]);

    switch(c){
      case 'a':
      output[i]='6';
      break;

      case 'e':
      output[i]='3';
      break;

      case 'i':
      output[i]='1';
      break;

      case 'o':
      output[i]='0';
      break;
    }
  }

  return output;

}
