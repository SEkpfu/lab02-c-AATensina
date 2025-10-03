#include <stdio.h>
int main(void)
{
    int a, b, c, sum, n, sr, min, m, mink, maxk;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);

    sum=0;
    if (a>10)
    {
        sum=sum+a;
    }
    if (b>10)
    {
        sum=sum+b;
    }
    if (c>10)
    {
        sum=sum+c;
    }

    n=0;
    if (c%2==0)
    {
        n=n+1;
    }
        if (b%2==0)
    {
        n=n+1;
    }
        if (a%2==0)
    {
        n=n+1;
    }
    
    mink=9999;
    maxk=-9999;
    if (maxk>a)
    {
        maxk=a;
    }
    else
    {
        if (mink<a)
        {
            mink=a;
        }
        else
        {
            sr=a;
        }
    }
    if (maxk>b)
    {
        maxk=b;
    }
    else
    {
        if (mink<b)
        {
            mink=b;
        }
        else
        {
            sr=b;
        }
    }
    if (maxk>c)
    {
        maxk=c;
    }
    else
    {
        if (mink<c)
        {
            mink=c;
        }
        else
        {
            sr=c;
        }
    }


    min=99999;
    if (a<min)
    {
        min=a;
        m=1;
    }
    if (b<min)
    {
        min=b;
        m=2;
    }
    if (c<min)
    {
        min=c;
        m=3;
    }


    
    printf("sum = %d \nn = %d \n sr = %d\nmin = %d m=%d\n", sum, n, sr, min, m);

    return 0;
}