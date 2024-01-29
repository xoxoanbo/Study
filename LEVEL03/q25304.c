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
    int sN = 0;
    int sA = 0;
    int sB = 0;

    int sCount = 0;
    int sSum = 0;

    scanf("%d", &sX);
    scanf("%d", &sN);

    for( sCount = 0; sCount < sN; sCount++ )
    {
        scanf("%d", &sA);
        scanf("%d", &sB);

        sSum += sA*sB;
    }

    if( sX == sSum )
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
