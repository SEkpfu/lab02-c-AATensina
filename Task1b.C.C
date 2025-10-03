#include <stdio.h>
int main(void)
{
    double a1, b1, a2, b2;
    printf("a1=");
    scanf("%lf", &a1);
    printf("b1=");
    scanf("%lf", &b1);

    printf("a2=");
    scanf("%lf", &a2);
    printf("b2=");
    scanf("%lf", &b2);

    double s1, s2;
    s1=a1*b1;
    s2=a2*b2;
    
    if (s1=s2)
        printf("S1=S2=%.2f", s1);
    else
        if (s1>s2)
            printf("1st square, S1=%.2f", s1);
        else
            printf("2nd square, S2=%.2f", s2);

    return 0;
}