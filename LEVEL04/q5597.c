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

    int sStudents = 30;
    int sLoopCount = 0;
    int sLoopCount2 = 0;

    sNumbers = (int*)malloc( sizeof( int ) * (sStudents + 1) );

    for( sLoopCount = 0; sLoopCount < sStudents + 1; sLoopCount++ )
    {
        sNumbers[sLoopCount] = sLoopCount;
    }

    for( sLoopCount = 0; sLoopCount < 28; sLoopCount++ )
    {
        scanf("%d", &sInputNum);
        for( sLoopCount2 = 0; sLoopCount2 < sStudents + 1; sLoopCount2++ )
        {
            if( sNumbers[sLoopCount2] == sInputNum )
            {
                sNumbers[sLoopCount2] = 99;
            }
        }
    }

    for( sLoopCount = 1; sLoopCount < sStudents + 1; sLoopCount++ )
    {
        if( sNumbers[sLoopCount] != 99 )
        {
            printf("%d\n", sNumbers[sLoopCount]);
        }
    }

    free( sNumbers );

    return 0;
}
