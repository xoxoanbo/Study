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
    int sLoopCount2 = 0;
    int sLoopCount3 = 0;

    int *sNumbers = NULL;
    int *sNumbersTemp = NULL;

    int sFirst = 0;
    int sLast  = 0;

    scanf("%d %d", &sArraySize, &sInputCount);
    sNumbers = (int*)malloc( sizeof( int ) * ( sArraySize + 1) );
    sNumbersTemp = (int*)malloc( sizeof( int ) * ( sArraySize + 1) );

    for( sLoopCount = 0; sLoopCount < sArraySize + 1; sLoopCount++ )
    {
        sNumbers[sLoopCount] = sLoopCount;
    }

    for( sLoopCount = 0; sLoopCount < sInputCount; sLoopCount++ )
    {
        scanf("%d %d", &sFirst, &sLast);

        sLoopCount3 = sFirst;
        for( sLoopCount2 = sLast; sLoopCount2 >= sFirst; sLoopCount2-- )
        {
            sNumbersTemp[sLoopCount3] = sNumbers[sLoopCount2];
            sLoopCount3++;
        }

        for( sLoopCount2 = sFirst; sLoopCount2 <= sLast; sLoopCount2++ )
        {
            sNumbers[sLoopCount2] = sNumbersTemp[sLoopCount2];
        }
    }

    for( sLoopCount = 1; sLoopCount < sArraySize + 1; sLoopCount++ )
    {
        printf("%d ", sNumbers[sLoopCount]);
    }

    free( sNumbers );
    free( sNumbersTemp );

    return 0;
}
