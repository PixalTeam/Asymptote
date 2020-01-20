#include <stdio.h>
#include <cmath>
#include <chrono>

using namespace std::chrono;

int main(void)
{
    static double p = 0, u, n;
    printf("\"p\" value: ");
    scanf_s("%lf", &p);
    printf("\"n\" value: ");
    scanf_s("%lf", &n);

    milliseconds date1 = duration_cast<milliseconds>(
        system_clock::now().time_since_epoch()
        );

    u = (2 * n + 3) / (n + 1);
    while (fabs(u - 2) >= pow(10, -p)) {
        n += 1;
        u = (2 * n + 3) / (n + 1);
    }

    milliseconds date2 = duration_cast<milliseconds>(
        system_clock::now().time_since_epoch()
        );

    printf("%lf", n);
    printf("\n");
    printf("%d", date2 - date1);
    printf("ms");
    return 0;
}