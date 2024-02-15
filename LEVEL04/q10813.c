#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    int sArraySize = 0;
    int sInputCount = 0;

    int sLoopCount = 0;
    int *sNumbers = NULL;

    int sFirst = 0;
    int sLast  = 0;

    scanf("%d %d", &sArraySize, &sInputCount);
    sNumbers = (int*)malloc( sizeof( int ) * ( sArraySize + 1) );

    for( sLoopCount = 0; sLoopCount < sArraySize + 1; sLoopCount++ )
    {
        sNumbers[sLoopCount] = sLoopCount;
    }

    for( sLoopCount = 0; sLoopCount < sInputCount; sLoopCount++ )
    {
        scanf("%d %d", &sFirst, &sLast);

        sNumbers[0] = sNumbers[sFirst];
        sNumbers[sFirst] = sNumbers[sLast];
        sNumbers[sLast]  = sNumbers[0]; 
    }

    for( sLoopCount = 1; sLoopCount < sArraySize + 1; sLoopCount++ )
    {
        printf("%d ", sNumbers[sLoopCount]);
    }

    free( sNumbers );

    return 0;
}
