#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
int BLOCK_SIZE = 512;


int main(int argc, char *argv[])
{

 FILE *file = fopen(argv[1], "r");
 FILE *img=NULL;
 int files=0;
 char fileName[8];

//jpeg starts: 0xff || 0xd8 || 0xff ends 0xe0 || 0xe1 || 0xef
//stored backToback => per 512byte
  if(argc!=2)
  {
    printf("Usage: ./recover IMAGE\n");
  }

  if(file==NULL){
    printf("Could not open");
    return 1;
  }

  bool found=false;
  int jpg_count=0;
  uint8_t buffer[BLOCK_SIZE];
  char jpg_name[8];

  FILE *out=NULL;

  while (fread(buffer, BLOCK_SIZE,1, file) == 1)
  {
      if( buffer[0]==0xff && buffer[1]== 0xd8 && buffer[2]== 0xff && (buffer[3] & 0xf0)==0xe0){
          if(found){
            fclose(out);
          }
          else {
            found=true;
          }

          sprintf(jpg_name, "%03d.jpg", jpg_count);
          out=fopen(jpg_name, "w");
          if(out==NULL){
            fclose(file);
            printf("Could not create %s.\n", jpg_name);
            return 3;
          }
          jpg_count++;

        }
        if(found){
          fwrite(buffer, BLOCK_SIZE, 1, out);
        }

      }
      fclose(file);
      if(found){
        fclose(out);
  }
  return 0;

  }
