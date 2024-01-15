#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    double sNumA = 0;
    double sNumB = 0;
    double sNumC = 0;

    scanf("%lf", &sNumA);
    scanf("%lf", &sNumB);
    scanf("%lf", &sNumC);

    printf("%.f\n", sNumA + sNumB + sNumC );

    return 0;
}
