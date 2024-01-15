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
    int sTime = 0;

    int sDiffHour = 0;
    int sDiffMin = 0;

    scanf("%d", &sHour);
    scanf("%d", &sMin);
    scanf("%d", &sTime);

    sDiffHour = ( sMin + sTime ) / 60;
    sDiffMin = ( sMin + sTime ) % 60;

    sHour = (sHour + sDiffHour) % 24;

    printf("%d %d\n", sHour,sDiffMin );

    return 0;
}
