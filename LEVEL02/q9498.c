#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    int sScore = 0;

    scanf("%d", &sScore);

    if( sScore >= 90 )
    {
        printf("A\n");
    }
    else if( sScore >= 80 )
    {
        printf("B\n");
    }
    else if( sScore >= 70 )
    {
        printf("C\n");
    }
    else if( sScore >= 60 )
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }

    return 0;
}
