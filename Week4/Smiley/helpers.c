#include "/Users/renatairinyi/Documents/PROGRAMOZÀS/GitHub/Training---Harvard-CS50__Introduction-to-Computer-Science/Week4/Smiley/helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
   
        
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Make black pixels turn red
            if (image[i][j].rgbtRed == 0x00 && image[i][j].rgbtGreen == 0x00 && image[i][j].rgbtBlue == 0x00)
            {
                image[i][j].rgbtGreen = 133;
                image[i][j].rgbtBlue = 100;
                image[i][j].rgbtRed = 255;
            }

        }
    }
    
}
