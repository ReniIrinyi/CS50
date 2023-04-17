#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
//in ASCII
int    abc[]={65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90};
int compute_score(string word);

int main(void)
{
    int score1=compute_score("cat");
    int score2=compute_score("play");

// wird nicht geprintet.. .
    if(score1>score2){
        printf("Player 1 wins!\n");
    }if(score1<score2){
        printf("Player 2 wins!\n");
    } else printf("Tie!\n");
    
}

int compute_score(string word)
{
   int currScore=0;

    for(int i = 0; i < strlen(word); i++){
       for(int a=0; a<sizeof(abc); a++){

           if(abc[a]==toupper(word[i])){
             currScore+=POINTS[a];       
             break;
        }
    } 
  }
  return currScore;
}


