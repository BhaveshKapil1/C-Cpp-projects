#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
} pixel;

void make_redder( pixel *p){
    p -> r = 254;
}
int main()
{
    pixel p = {1,2,3};
    p.r = 5;

    pixel *screen = malloc(10 * sizeof (pixel));
    for (int i = 0; i<10 * sizeof (pixel);i++){
        screen[i].r = i;
        screen[i].g = i+1;
        screen[i].b = i+2;
    }
     for (int i = 0; i<10;i++){
        printf("%lu, %lu, %lu \n", screen[i].r, screen[i].g, screen[i].b);
    }
    printf("\n %lu, %lu, %lu \n", p.r, p.g, p.b);
    make_redder(&p);
    printf("%lu, %lu, %lu \n", p.r, p.g, p.b);
    return 0;
}
