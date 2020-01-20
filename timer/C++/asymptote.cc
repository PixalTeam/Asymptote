#include <iostream>
#include <stdio.h>
#include <math.h>
#include <time.h> 

using namespace std;

int main() {
    static double p, u, n;
    cout << "\"p\" value: ";
    cin >> p;
    cout << "\"n\" value: ";
    cin >> n;
    clock_t start, end;

    start = clock();
    {
        u = (2 * n + 3) / (n + 1);

        while (abs(u - 2) >= pow(10, -p)) {
            n += 1;
            u = (2 * n + 3) / (n + 1);
        }
    }
    end = clock();
    std::cout << n << std::endl;
    printf("%f", ((end - start) / (double)CLOCKS_PER_SEC) * 1000);
    printf("ms");

    return 0;
}