#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    int sX = 0;
    int sY = 0;

    scanf("%d", &sX);
    scanf("%d", &sY);

    if( sX > 0 )
    {
        if( sY > 0 )
        {
            printf("1\n");
        }
        else
        {
            printf("4\n");
        }
    }
    else
    {
        if( sY > 0 )
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }

    return 0;
}
