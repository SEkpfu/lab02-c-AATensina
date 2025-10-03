#include <stdio.h>

int main() {
    int  bd, bm, by;
    int nd, nm, ny;
    int i;
    
    printf("birth data  = ");
    scanf("%d %d %d", &bd, &bm, &by;
    
    printf("todays data =  ");
    scanf("%d %d %d", &nd, &nm, &ny);
    
    i = ny - by;
    
    if (nm < bm || (nm == bm && nd< bd)) {
        i--;
    }
    
    printf("You are %d years old\n", i);
    
    return 0;
}
