//L2-Q24:

#include <stdio.h>
#include <math.h>
#define MAX 500

int main() {
    int a = 1, b = 1, c = 1;
    
    for (c; c <= MAX; c++) {
        a = 1; b = 1;
        for (b; b <= MAX; b++) {
            a = 1;
            for (a; a <= MAX; a++) {
                if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
                    printf("%d² + %d² = %d²\n", a, b, c);
                }
            }
        }        
    }
    
    return 0;
}
