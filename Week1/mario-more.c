
#include <stdio.h>

int main(void)
{
int input=5;

//LESSS
    for(int i = 1; i <= input; i++){
        printf("\n");
          for(int j = 1; j <= i; j++){
            printf("#");
          }
    } 

printf("\n------- \n"); 

     for(int i = input; i >= 1; i--){
          for(int j = i; j > 1; j--){
            printf(" ");
          }
          //printing the pyramid
          for(int x=input; x>=i; x--){
            printf("#");
          }
          printf("\n"); 
    }

printf("\n------- \n"); 
 
 //MORE
 
  for(int i = input; i >= 1; i--){
          for(int j = i; j > 1; j--){
            printf(" ");
          }
          //printing the pyramid
          for(int x=input; x>=i; x--){
            printf("#");
   
          }
                   printf("  ");
              for(int j = i; j <=input; j++){
            printf("#");
          }
          printf("\n"); 
    }


}