#include <stdio.h>
#include <stdlib.h>

char ch[] = "1E23" ;
int num = 0;

int main()
{
    for (int i = 0; i<sizeof ch -1; i++)
    {
    num += (ch[i]<='9') ? (ch[i]-'0' <<4*(sizeof ch -2 -i) ) : (ch[i]-'A'+10 <<4*(sizeof ch -2 -i) ) ;
    }

    printf("%d \n\r",num);
    return 0;
}
