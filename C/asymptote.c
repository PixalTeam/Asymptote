#include <stdio.h>
#include <cmath>

int main(void)
{
    static double p = 0, u, n;
    printf("\"p\" value: ");
    scanf_s("%lf", &p);

    u = 3;
    while (fabs(u - 2) >= pow(10, -p)) {
        n += 1;
        u = (2 * n + 3) / (n + 1);
    }
    printf("%lf", n);
    
    return 0;
}