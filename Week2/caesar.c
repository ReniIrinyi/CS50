#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <ctype.h>


int arrayAbc[]={65,66,67,68,69,70,71,72,73,74,75,76,77,78,
      79,80,81,82,83,84,85,86,87,88,89,90,97,98,99,100,101,102,103,
      104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,
      120,121,122};

int main(int argc, string argv[])
{

      if
      (argc > 2 || !isdigit(atoi(argv[1]))){
      printf("Usage: ./ceaser key\n");
      return 1;
    }

      else

      {
      int k=atoi(argv[1]);
      string plaintext = get_string("plaintext:  ");
      char ciphertext[strlen(plaintext)];

      for(int i=0; i<strlen(plaintext); i++){
        for(int x=0; x<sizeof(arrayAbc); x++)

      if(plaintext[i]==arrayAbc[x]){
          ciphertext[i]=arrayAbc[x+k];
      }
 }
       printf("ciphertext: %s\n", ciphertext);
        return 0;
      }
}
