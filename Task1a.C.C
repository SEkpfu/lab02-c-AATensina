#include <stdio.h>
int main()
{
    double a1, b1, a2, b2;
    printf("print sides of 1st square\n");
    printf("a1= "); scanf("%lf", &a1);
    printf("b1= "); scanf("%lf", &b1);
    printf("do the same with 2nd square \n");
    printf("a2= "); scanf("%lf", &a2);
    printf("b2= "); scanf("%lf", &b2);
    double s1, s2;
    s1 = a1 * b1;
    s2 = a2 * b2;
    if (s1 > s2)
    printf("max is s1, S= %.2f", s1);
    else
    printf("max is s2, S= %.2f", s2);
    return 0;
}