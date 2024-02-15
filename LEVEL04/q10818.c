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
    int sMinNum = 0;


    scanf("%d", &sCount);

    sNumbers = (int*)malloc( sizeof( int ) * sCount );

    for( sLoopCount = 0; sLoopCount < sCount; sLoopCount++ )
    {
        scanf("%d", &sNumbers[sLoopCount]);
    }

    sMaxNum = sNumbers[0];
    sMinNum = sNumbers[0];

    for( sLoopCount = 0; sLoopCount < sCount; sLoopCount++ )
    {
        if( sMaxNum < sNumbers[sLoopCount] )
        {
            sMaxNum = sNumbers[sLoopCount];
        }

        if( sMinNum > sNumbers[sLoopCount] )
        {
            sMinNum = sNumbers[sLoopCount];
        }
    }

    printf("%d %d\n", sMinNum, sMaxNum);

    free( sNumbers );

    return 0;
}
