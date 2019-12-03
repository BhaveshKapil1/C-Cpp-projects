#include <stdio.h>
#include <stdlib.h>

unsigned char* ReadBMP(char* filename)
{
 FILE* img = fopen(filename, "rb");   //read the file

unsigned char header[54];
fread(header, sizeof(unsigned char), 54, img); // read the 54-byte header



 u_int32_t width = header[0x12];          //size 4
 printf("width = %i \n", width);
 u_int32_t height = header[0x16];         //size 4
 printf("height = %i \n", height);
 u_int32_t offset = header[0x0a];         //size 4
 printf("offset = 0x%04x \n", offset);
 u_int32_t size = header[0x02];           //size 4
 printf("size of file = %i \n", size);
 u_int16_t info = header[0];                //size 2
 printf("info header = 0x%x \n", info);
 u_int16_t bpp = header[0x1c];            //size 2
 printf("Number of bits per pixel  = %i \n", bpp);

offset-=54;    //correct start data address
fread(header, sizeof(unsigned char), offset, img); // read the 54-byte header
int index;

 u_int16_t cores[width];

 for (int j = 0; j<height; j++)
    {
    fread(cores, 2, width, img); // read the data row by row
    for (int k = 0; k<width; k++)
        {
        printf("x=%i, y=%i, 0x%04x,\n\r", k,j, cores[k]);
        }
    printf("\n\r");

    }

//u_int16_t header1[54];
//fread(header1, sizeof(unsigned char), 54, img); // read the 54-byte header
//printf("%i\n\r", sizeof(unsigned char));
//printf("0x%04x, \n\r", header1[0]);
//printf("0x%04x, \n\r", header1[1]);
//printf("0x%04x, \n\r", header1[2]);
//printf("0x%04x, \n\r", header1[3]);

fclose(img); //close the file
}



int main()
{
//    ReadBMP("Untitled.bmp");
    ReadBMP("image1.bmp");
    return 0;
}
