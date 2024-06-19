#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    char sInputWord[101];
    char sAlpha[26];
    int  sResult[26];
    int sWordLength = 0;
    int sLoopCount = 0;
    int i = 0;

    scanf("%100s", sInputWord);
    sWordLength = strlen( sInputWord );

    for( sLoopCount = 0; sLoopCount < 26; sLoopCount++ )
    {
        sAlpha[sLoopCount] = sLoopCount+97;
        sResult[sLoopCount] = -1;
    }

    for( sLoopCount = 0; sLoopCount < sWordLength; sLoopCount++ )
    {
        for( i = 0; i < 26; i++ )
        {
            if( sInputWord[sLoopCount] == sAlpha[i] )
            {
                if( sResult[i] == -1 )
                {
                    sResult[i] = sLoopCount;
                }
            }
        }
    }

    for( sLoopCount = 0; sLoopCount < 26; sLoopCount++ )
    {
        printf("%d ", sResult[sLoopCount]);
    }

    printf("\n");

    return 0;
}
