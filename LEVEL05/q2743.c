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
    int sLength = 0;

    scanf("%s100", sInputWord);
    sLength = strlen( sInputWord );

    printf("%d\n", sLength);

    return 0;
}
