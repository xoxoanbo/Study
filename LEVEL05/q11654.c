#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    char sInputChar;

    scanf("%c", &sInputChar);

    printf("%d\n", (int)sInputChar);

    return 0;
}
