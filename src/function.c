#include <stdio.h>
#include <math.h>
#include <function.h>

int process ( float a, float b, float c, float *d, float *x1, float *x2, int *CountRoots) {
    if ( ( a == 0) && ( b == 0 ) && ( c == 0) ) {
        printf("No quadratic root's\n");
        *CountRoots = -1;
	return 0;
    }
    if ( a == 0 ) {
        *x1 = ( -1 ) * ( c / b );
        *x2 = *x1;
        *CountRoots = 1;
        return 0;
    }
    *d = ( b * b ) - ( 4 * a * c);
    if ( *d < 0 ) {
        printf ( "The equation has no roots\n" );
        *CountRoots = 0;
        return 0;
    } else {
        *x1 = ( -b + sqrt(*d) ) / ( 2 * a );
        *x2 = ( -b - sqrt(*d) ) / ( 2 * a );
        printf ( " x1 = %f, x2 = %f\n", *x1, *x2 );
        *CountRoots = 2;
        return 0;
    }
}
