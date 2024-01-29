#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    int sLine = 0;
    int sSpace = 0;
    int sCount = 0;
    int sCount2 = 0;

    scanf("%d", &sLine );

    for( sCount = 0; sCount < sLine; sCount++ )
    {
        for( sSpace = sLine - 1; sSpace > sCount; sSpace-- )
        {
            printf(" ");
        }

        for( sCount2 = 0; sCount2 <= sCount; sCount2++ )
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
