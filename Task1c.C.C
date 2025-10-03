#include <stdio.h>
int main(void)
{
    double a1, b1, a2, b2, a3, b3;
    printf("a1=");
    scanf("%lf", &a1);
    printf("b1=");
    scanf("%lf", &b1);

    printf("a2=");
    scanf("%lf", &a2);
    printf("b2=");
    scanf("%lf", &b2);

    printf("a3=");
    scanf("%lf", &a3);
    printf("b3=");
    scanf("%lf", &b3);

    double s1, s2, s3;
    s1=a1*b1;
    s2=a2*b2;
    s3=a3*b3;
    
    //через IF
    //if (s1>s2)
    //{
    //    if (s1>s3)
    //        printf("1st is max%.2f", s1);
    //    else
    //        printf("3rd is max%.2f", s3);
    //}
    //    
    //else
    //{
    //    if (s2>s3)
    //        printf("2nd is max%.2f", s2);
    //    else 
    //        printf ("3rd is max%.2f", s3);
    //}

    //через ?
    //printf("max s is %.2f", ((s1 > s2) ? ((s1>s3) ? s1 : s3) : ((s2>s3) ? s2 : s3)));

    return 0;
}