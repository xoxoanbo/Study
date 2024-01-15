#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    int sHour = 0;
    int sMin = 0;

    scanf("%d", &sHour);
    scanf("%d", &sMin);

    if( sMin < 45 )
    {
        if( sHour == 0 )
        {
            sHour = 23;
        }
        else
        {
            sHour--;
        }
        sMin = sMin + 15;
    }
    else
    {
        sMin = sMin - 45;
    }

    printf("%d %d\n", sHour, sMin );

    return 0;
}
