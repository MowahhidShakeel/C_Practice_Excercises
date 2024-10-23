#include <float.h>
#include <limits.h>
#include <stdio.h>
#include <math.h>

#define ZERO 0

int main()
{
    /* Solved by directly printing the values of the header files */
    
    printf("Range of signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Range of unsigned char: %d to %d\n", ZERO, UCHAR_MAX);
    printf("\n");
    
    printf("Range of signed short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of unsigned short: %d to %d\n", ZERO, USHRT_MAX);
    printf("\n");
    
    printf("Range of signed int: %d to %d\n", INT_MAX, INT_MIN);
    printf("Range of unsigned short: %d to %d\n", ZERO, UINT_MAX);
    printf("\n");
    
    printf("Range of signed long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long: %lu to %lu\n", ZERO, ULONG_MAX);

}