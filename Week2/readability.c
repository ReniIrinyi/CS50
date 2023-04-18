#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
  string input = get_string("Text: ");


    float L = 100*count_letters(input) /count_words(input);
    float S = 100*count_sentences(input) / count_words(input);
    int grade = round(0.0588 * L - 0.296 * S - 15.8);

        if (grade < 1)
        {
            printf("Before Grade 1\n");
        }
        else if (grade >= 16)
        {
            printf("Grade 16+\n");
        }
        else
        {
            printf("Grade %i\n", grade);
        }
        
        // printf("%i\n %i\n %i\n %f\n %f\n %i\n",count_letters(input), count_words(input), count_sentences(input), L, S, grade);

}

 int count_letters(string text){

     int letterCount = 0;


    for(int i = 0; i < strlen(text); i++)
    {
      if((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122 ))
      {
          letterCount++;
      }
    }
    return letterCount;
    }



    int count_words(string text){

        int countWords = 0;
      if(text){
      countWords=1;
          for(int i = 0; i < strlen(text); i++){
              if(text[i]==32){
                countWords++;
              }

          }
      }
        return countWords;
    }

    int count_sentences(string text){

        int countSentence = 0;

          for(int i = 0; i < strlen(text); i++){

              if(text[i]==33 || text[i]==46 || text[i]==63){
                countSentence++;
              }

          }

        return countSentence;
    }