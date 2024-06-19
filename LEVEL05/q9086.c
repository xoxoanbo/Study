#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    int sCaseCount = 0;
    int sLoopCount = 0;

    char sInputWord[1001]; 
    int sLength = 0;

    scanf("%d", &sCaseCount);

    for( sLoopCount = 0; sLoopCount < sCaseCount; sLoopCount++ )
    {
        scanf("%s1000", sInputWord);
        sLength = strlen( sInputWord );

        printf("%c%c\n", sInputWord[0], sInputWord[sLength-1]);
    }

    return 0;
}
