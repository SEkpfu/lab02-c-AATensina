#include <stdio.h>
#include <math.h>

int main() {
    
    double x, y;
    printf("x и y ");
    scanf("%lf %lf", &x, &y);

    
    if (x >= -2 && x <= 0 && y >= 0 && y <= 1){
        printf("a E (a) \n");
    }
    else{
        printf(" a not E (a) \n");
    }
  
    if (x*x + y*y <= 25 && y >= 0){
        printf("a E (b) \n");
    }
    else{
        printf(" a not E (b) \n");
    }

    
    if ((x*x + (y-3)*(y-3)) <= 9 && x >= 0){
        printf("a E (c) \n");
    }
    else{
        printf("a not E (c) \n");
    }

    
    if (x >= 0 && y >= 0 && y <= -2*x + 2){
        printf("a E (d) \n");
    }
    else{
        printf(" a not E (d) \n");
    }

    return 0;

}
