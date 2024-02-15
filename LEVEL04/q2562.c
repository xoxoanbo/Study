#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    int sCount = 0;
    int sLoopCount = 0;
    int *sNumbers = NULL;

    int sMaxNum = 0;
    int sMaxIndex = 0;

    sCount = 9;
    sNumbers = (int*)malloc( sizeof( int ) * sCount );

    for( sLoopCount = 0; sLoopCount < sCount; sLoopCount++ )
    {
        scanf("%d", &sNumbers[sLoopCount]);
    }

    sMaxNum = sNumbers[0];
    sMaxIndex = 1;

    for( sLoopCount = 0; sLoopCount < sCount; sLoopCount++ )
    {
        if( sMaxNum < sNumbers[sLoopCount] )
        {
            sMaxNum = sNumbers[sLoopCount];
            sMaxIndex = sLoopCount + 1;
        }
    }

    printf("%d\n%d\n", sMaxNum, sMaxIndex);

    free( sNumbers );

    return 0;
}
