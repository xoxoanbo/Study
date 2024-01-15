#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    int sNum1 = 0;
    int sNum2 = 0;

    int sNum3 = 0;
    int sNum4 = 0;
    int sNum5 = 0;
    int sNum6 = 0;

    scanf("%d", &sNum1);
    scanf("%d", &sNum2);

    sNum3 = sNum1 * ( sNum2 % 10 );
    sNum4 = (sNum1 * ( sNum2 % 100 - ( sNum2 % 10 ) ))/10;
    sNum5 = (sNum1 * ( sNum2 - ( sNum2 % 100 )))/100;
    sNum6 = sNum1 * sNum2;

    printf("%d\n", sNum3 );
    printf("%d\n", sNum4 );
    printf("%d\n", sNum5 );
    printf("%d\n", sNum6 );

    return 0;
}
