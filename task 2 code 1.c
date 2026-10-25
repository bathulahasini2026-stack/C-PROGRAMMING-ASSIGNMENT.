#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    printf("Size of unsigned short: %zu bytes\n", sizeof(unsigned short));

    printf("Maximum unsigned short: %u\n", (unsigned)USHRT_MAX);
    printf("Maximum unsigned int: %u\n", UINT_MAX);
    printf("Maximum long: %ld\n", LONG_MAX);
    printf("Maximum long long: %lld\n", LLONG_MAX);

    printf("Float precision: %d decimal digits\n", FLT_DIG);
    printf("Double precision: %d decimal digits\n", DBL_DIG);

    return 0;
}
