#include <stdio.h>
#include <math.h>


float desc()
{
    float a,b,c;
    printf("Input a,b,c for ax^2+bx+c=0\n");
    printf("a = ");
    scanf ("%f", &a);
    printf("b = ");
    scanf ("%f", &b);
    printf("c = ");
    scanf ("%f", &c);
    float d=(b*b-4*a*c);
    printf ("D = b^2 - 4ac = %f\n", d);
    if (d<0){
        printf ("D < 0 - net korney\n");
        return 0;
    }else if(d==0){
            printf ("D = 0 - 1 koren\n");
            c=(-b)/(-2*a);
            printf ("x = (-b)/(-2a) = %f\n", c);
        }else{
            printf ("D > 0 - 2 kornya\n");
            c=(-b + sqrt(d))/(-2*a);
            printf ("x1 = (-b + sqrt(d))/(-2a) = %f\n", c);
            c=(-b - sqrt(d))/(-2*a);
            printf ("x1 = (-b - sqrt(d))/(-2a) = %f\n", c);
        }
}
