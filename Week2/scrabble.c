#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int    abc[]={65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90};
int compute_score(string word);

int main(void)
{
    // Get input words from both players

    int player1=compute_score("cat");
    // Score both words
    int player2=compute_score("maus");

    if(player1>player2){
        printf("Player 1 wins!");
    if(player2>player1){
        printf("Player 2 wins!");
    } else printf("Tie!");
    }
}

int compute_score(string word)
{
     int currScore=0;

    for(int i = 0; i < sizeof(word); i++){
        for(int a=0; a<sizeof(abc); a++){
        if(toupper(word[i])==abc[a]){
        
            printf("points by int:%i für %c: %i\n",i,word[i], POINTS[a]);
            currScore+=POINTS[a];
            break;
      
        }
    
        }
    }
 printf("current Score ist: %i\n", currScore);
     return currScore;
    
  

}
