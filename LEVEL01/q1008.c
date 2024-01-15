#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    double sNum1 = 0;
    double sNum2 = 0;

    scanf("%lf", &sNum1);
    scanf("%lf", &sNum2);

    printf("%.15f\n", sNum1 / sNum2 );

    return 0;
}
