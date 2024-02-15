#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    int sInputNum = 0;
    int *sNumbers = 0;

    int sNumberCount = 42;
    int sLoopCount = 0;
    int sInputCount = 10;

    int sMod = 0;
    int sModCount = 0;

    sNumbers = (int*)malloc( sizeof( int ) * sNumberCount );

    for( sLoopCount = 0; sLoopCount < sNumberCount; sLoopCount++ )
    {
        sNumbers[sLoopCount] = 42;
    }

    for( sLoopCount = 0; sLoopCount < sInputCount; sLoopCount++ )
    {
        scanf("%d", &sInputNum);

        sMod = sInputNum % 42;
        sNumbers[sMod] = sMod;
    }

    for( sLoopCount = 0; sLoopCount < sNumberCount; sLoopCount++ )
    {
        if( sNumbers[sLoopCount] != 42 )
        {
            sModCount++;
        }
    }

    printf("%d\n", sModCount);


    free( sNumbers );

    return 0;
}
