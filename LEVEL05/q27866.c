#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * #include "anbo.h"
 */

int main( int aArgc, char *aArgv[] )
{
    char sInputWord[1001]; 
    int sNumber = 0;

    scanf("%s1000", sInputWord);
    scanf("%d", &sNumber);

    printf("%c\n", sInputWord[sNumber-1]);


    return 0;
}
